/*
 * Copyright (c) 2023 Félix Poulin-Bélanger. All rights reserved.
 */

#ifndef dynamic_info_h
#define dynamic_info_h

struct dynamic_info {
    const char* kern_version;
    const char* build_version;
    const char* device_id;
    // struct fileglob
    u64 fileglob__fg_ops;
    u64 fileglob__fg_data;
    // struct fileops
    u64 fileops__fo_kqfilter;
    // struct fileproc
    // u64 fileproc__fp_iocount;
    // u64 fileproc__fp_vflags;
    // u64 fileproc__fp_flags;
    // u64 fileproc__fp_guard_attrs;
    // u64 fileproc__fp_glob;
    // u64 fileproc__fp_guard;
    // u64 fileproc__object_size;
    // struct fileproc_guard
    u64 fileproc_guard__fpg_guard;
    // struct kqworkloop
    u64 kqworkloop__kqwl_state;
    u64 kqworkloop__kqwl_p;
    u64 kqworkloop__kqwl_owner;
    u64 kqworkloop__kqwl_dynamicid;
    u64 kqworkloop__object_size;
    // struct pmap
    u64 pmap__tte;
    u64 pmap__ttep;
    // struct proc
    u64 proc__p_list__le_next;
    u64 proc__p_list__le_prev;
    u64 proc__p_pid;
    u64 proc__p_fd__fd_ofiles;
    u64 proc__object_size;
    // struct pseminfo
    u64 pseminfo__psem_usecount;
    u64 pseminfo__psem_uid;
    u64 pseminfo__psem_gid;
    u64 pseminfo__psem_name;
    u64 pseminfo__psem_semobject;
    // struct psemnode
    // u64 psemnode__pinfo;
    // u64 psemnode__padding;
    // u64 psemnode__object_size;
    // struct semaphore
    u64 semaphore__owner;
    // struct specinfo
    u64 specinfo__si_rdev;
    // struct task
    u64 task__map;
    u64 task__threads__next;
    u64 task__threads__prev;
    u64 task__itk_space;
    u64 task__object_size;
    // struct thread
    u64 thread__task_threads__next;
    u64 thread__task_threads__prev;
    u64 thread__map;
    u64 thread__thread_id;
    u64 thread__object_size;
    // struct uthread
    u64 uthread__object_size;
    // struct vm_map_entry
    u64 vm_map_entry__links__prev;
    u64 vm_map_entry__links__next;
    u64 vm_map_entry__links__start;
    u64 vm_map_entry__links__end;
    u64 vm_map_entry__store__entry__rbe_left;
    u64 vm_map_entry__store__entry__rbe_right;
    u64 vm_map_entry__store__entry__rbe_parent;
    // struct vnode
    u64 vnode__v_un__vu_specinfo;
    // struct _vm_map
    u64 _vm_map__hdr__links__prev;
    u64 _vm_map__hdr__links__next;
    u64 _vm_map__hdr__links__start;
    u64 _vm_map__hdr__links__end;
    u64 _vm_map__hdr__nentries;
    u64 _vm_map__hdr__rb_head_store__rbh_root;
    u64 _vm_map__pmap;
    u64 _vm_map__hint;
    u64 _vm_map__hole_hint;
    u64 _vm_map__holes_list;
    u64 _vm_map__object_size;
    // kernelcache static addresses
    u64 kernelcache__kernel_base;
    u64 kernelcache__cdevsw;
    u64 kernelcache__gPhysBase;
    u64 kernelcache__gPhysSize;
    u64 kernelcache__gVirtBase;
    u64 kernelcache__perfmon_devices;
    u64 kernelcache__perfmon_dev_open;
    u64 kernelcache__ptov_table;
    u64 kernelcache__vm_first_phys_ppnum;
    u64 kernelcache__vm_pages;
    u64 kernelcache__vm_page_array_beginning_addr;
    u64 kernelcache__vm_page_array_ending_addr;
    u64 kernelcache__vn_kqfilter;
};

const struct dynamic_info kern_versions[] = {
    //iPhone SE 2020 iOS 16.6 beta1
    {
        .kern_version = "Darwin Kernel Version 22.6.0: Tue May  9 06:18:02 PDT 2023; root:xnu-8796.140.12.502.1~12/RELEASE_ARM64_T8030",
        .build_version = "20G5026e",
        .device_id = "iPhone12,8",
        .fileglob__fg_ops = 0x28,
        .fileglob__fg_data = 0x40 - 8,
        .fileops__fo_kqfilter = 0x30,
        // .fileproc__fp_iocount = 0x0000,
        // .fileproc__fp_vflags = 0x0004,
        // .fileproc__fp_flags = 0x0008,
        // .fileproc__fp_guard_attrs = 0x000a,
        // .fileproc__fp_glob = 0x0010,
        // .fileproc__fp_guard = 0x0018,
        // .fileproc__object_size = 0x0020,
        .fileproc_guard__fpg_guard = 0x8,
        .kqworkloop__kqwl_state = 0x10,
        .kqworkloop__kqwl_p = 0x18,
        .kqworkloop__kqwl_owner = 0xd0,
        .kqworkloop__kqwl_dynamicid = 0xd0 + 0x18,
        .kqworkloop__object_size = 0x108,
        .pmap__tte = 0x0,
        .pmap__ttep = 0x8,
        .proc__p_list__le_next = 0x0,
        .proc__p_list__le_prev = 0x8,
        .proc__p_pid = 0x60,
        .proc__p_fd__fd_ofiles = 0xf8,
        .proc__object_size = 0x730,
        .pseminfo__psem_usecount = 0x04,
        .pseminfo__psem_uid = 0x0c,
        .pseminfo__psem_gid = 0x10,
        .pseminfo__psem_name = 0x14,
        .pseminfo__psem_semobject = 0x38,
        // .psemnode__pinfo = 0x0000,
        // .psemnode__padding = 0x0008,
        // .psemnode__object_size = 0x0010,
        .semaphore__owner = 0x28,
        .specinfo__si_rdev = 0x18,
        .task__map = 0x28,
        .task__threads__next = 0x80 - 0x28,
        .task__threads__prev = 0x80 - 0x28 + 8,
        .task__itk_space = 0x300,
        .task__object_size = 0x628,
        .thread__task_threads__next = 0x378 - 0x18,
        .thread__task_threads__prev = 0x378 - 0x18 + 8,
        .thread__map = 0x378,
        .thread__thread_id = 0x410,
        .thread__object_size = 0x4b8,
        .uthread__object_size = 0x200,
        .vm_map_entry__links__prev = 0x00,
        .vm_map_entry__links__next = 0x08,
        .vm_map_entry__links__start = 0x10,
        .vm_map_entry__links__end = 0x18,
        .vm_map_entry__store__entry__rbe_left = 0x20,
        .vm_map_entry__store__entry__rbe_right = 0x28,
        .vm_map_entry__store__entry__rbe_parent = 0x30,
        .vnode__v_un__vu_specinfo = 0x78,
        ._vm_map__hdr__links__prev = 0x00 + 0x10,
        ._vm_map__hdr__links__next = 0x08 + 0x10,
        ._vm_map__hdr__links__start = 0x10 + 0x10,
        ._vm_map__hdr__links__end = 0x18 + 0x10,
        ._vm_map__hdr__nentries = 0x30,
        ._vm_map__hdr__rb_head_store__rbh_root = 0x38,
        ._vm_map__pmap = 0x40,
        ._vm_map__hint = 0x90 + 0x08,
        ._vm_map__hole_hint = 0x90 + 0x10,
        ._vm_map__holes_list = 0x90 + 0x18,
        ._vm_map__object_size = 0xc0,
        .kernelcache__kernel_base = 0xfffffff007004000,
        .kernelcache__cdevsw = 0xfffffff00a47dab0,
        .kernelcache__gPhysBase = 0xfffffff0079541b8,
        .kernelcache__gPhysSize = 0xfffffff0079541b8 + 8,
        .kernelcache__gVirtBase = 0xfffffff007952370,
        .kernelcache__perfmon_devices = 0xfffffff00a4bd520,
        .kernelcache__perfmon_dev_open = 0xfffffff007f07d78,
        .kernelcache__ptov_table = 0xfffffff0079079b8,
        .kernelcache__vm_first_phys_ppnum = 0xfffffff00a4bc910,
        .kernelcache__vm_pages = 0xfffffff007904100,
        .kernelcache__vm_page_array_beginning_addr = 0xfffffff007906958,
        .kernelcache__vm_page_array_ending_addr = 0xfffffff00a4bc908,
        .kernelcache__vn_kqfilter = 0xfffffff007f56588,
    },
    //iPhone 12 mini 16.1.2
    {
        .kern_version = "Darwin Kernel Version 22.1.0: Thu Oct  6 19:34:22 PDT 2022; root:xnu-8792.42.7~1/RELEASE_ARM64_T8101",
        .build_version = "20B110",
        .device_id = "iPhone13,1",
        .fileglob__fg_ops = 0x0028,
        .fileglob__fg_data = 0x0038,
        .fileops__fo_kqfilter = 0x0030,
        // .fileproc__fp_iocount = 0x0000,
        // .fileproc__fp_vflags = 0x0004,
        // .fileproc__fp_flags = 0x0008,
        // .fileproc__fp_guard_attrs = 0x000a,
        // .fileproc__fp_glob = 0x0010,
        // .fileproc__fp_guard = 0x0018,
        // .fileproc__object_size = 0x0020,
        .fileproc_guard__fpg_guard = 0x0008,
        .kqworkloop__kqwl_state = 0x0010,
        .kqworkloop__kqwl_p = 0x0018,
        .kqworkloop__kqwl_owner = 0x00d0,
        .kqworkloop__kqwl_dynamicid = 0x00e8,
        .kqworkloop__object_size = 0x0108,
        .pmap__tte = 0x0000,
        .pmap__ttep = 0x0008,
        .proc__p_list__le_next = 0x0000,
        .proc__p_list__le_prev = 0x0008,
        .proc__p_pid = 0x0060,
        .proc__p_fd__fd_ofiles = 0x00f8,
        .proc__object_size = 0x0530,
        .pseminfo__psem_usecount = 0x0004,
        .pseminfo__psem_uid = 0x000c,
        .pseminfo__psem_gid = 0x0010,
        .pseminfo__psem_name = 0x0014,
        .pseminfo__psem_semobject = 0x0038,
        // .psemnode__pinfo = 0x0000,
        // .psemnode__padding = 0x0008,
        // .psemnode__object_size = 0x0010,
        .semaphore__owner = 0x0028,
        .specinfo__si_rdev = 0x0018,
        .task__map = 0x0028,
        .task__threads__next = 0x0058,
        .task__threads__prev = 0x0060,
        .task__itk_space = 0x0300,
        .task__object_size = 0x0630,
        .thread__task_threads__next = 0x0360,
        .thread__task_threads__prev = 0x368,
        .thread__map = 0x0378,
        .thread__thread_id = 0x0418,
        .thread__object_size = 0x04c0,
        .uthread__object_size = 0x0208,
        .vm_map_entry__links__prev = 0x0000,
        .vm_map_entry__links__next = 0x0008,
        .vm_map_entry__links__start = 0x0010,
        .vm_map_entry__links__end = 0x0018,
        .vm_map_entry__store__entry__rbe_left = 0x0020,
        .vm_map_entry__store__entry__rbe_right = 0x0028,
        .vm_map_entry__store__entry__rbe_parent = 0x0030,
        .vnode__v_un__vu_specinfo = 0x0078,      //+ 0x08 -> + 0x10
        ._vm_map__hdr__links__prev = 0x0010,     //+ 0x08 -> + 0x10
        ._vm_map__hdr__links__next = 0x0018,     //+ 0x08 -> + 0x10
        ._vm_map__hdr__links__start = 0x0020,    //+ 0x08 -> + 0x10
        ._vm_map__hdr__links__end = 0x0028,      //+ 0x08 -> + 0x10
        ._vm_map__hdr__nentries = 0x0030,
        ._vm_map__hdr__rb_head_store__rbh_root = 0x0038,
        ._vm_map__pmap = 0x0040,
        ._vm_map__hint = 0x0098,
        ._vm_map__hole_hint = 0x00a0,
        ._vm_map__holes_list = 0x00a8,
        ._vm_map__object_size = 0x00c0,
        .kernelcache__kernel_base = 0xfffffff007004000,
        .kernelcache__cdevsw = 0xfffffff00a3a1168,
        .kernelcache__gPhysBase = 0xfffffff007847e40,
        .kernelcache__gPhysSize = 0xfffffff007847e48,
        .kernelcache__gVirtBase = 0xfffffff007846028,
        .kernelcache__perfmon_devices = 0xfffffff00a3dc330,
        .kernelcache__perfmon_dev_open = 0xfffffff007ecb5d0,
        .kernelcache__ptov_table = 0xfffffff0077fb9c0,
        .kernelcache__vm_first_phys_ppnum = 0xfffffff00a3db780,
        .kernelcache__vm_pages = 0xfffffff0077f86d8,
        .kernelcache__vm_page_array_beginning_addr = 0xfffffff0077fa970,
        .kernelcache__vm_page_array_ending_addr = 0xfffffff00a3db778,
        .kernelcache__vn_kqfilter = 0xfffffff007f1da7c,
    }
};

#endif /* dynamic_info_h */
