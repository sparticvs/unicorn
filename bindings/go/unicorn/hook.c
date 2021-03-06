#include <unicorn/unicorn.h>
#include "_cgo_export.h"

uc_err uc_hook_add_i1(uc_engine *handle, uc_hook *h2, uc_hook_type type, void *callback, void *user, int arg1) {
    return uc_hook_add(handle, h2, type, callback, user, arg1);
}

uc_err uc_hook_add_u2(uc_engine *handle, uc_hook *h2, uc_hook_type type, void *callback, void *user, uint64_t arg1, uint64_t arg2) {
    return uc_hook_add(handle, h2, type, callback, user, arg1, arg2);
}

void hookCode_cgo(uc_engine *handle, uint64_t addr, uint32_t size, void *user) {
    hookCode(handle, addr, size, user);
}

bool hookMemInvalid_cgo(uc_engine *handle, uc_mem_type type, uint64_t addr, int size, int64_t value, void *user) {
    return hookMemInvalid(handle, type, addr, size, value, user);
}

void hookMemAccess_cgo(uc_engine *handle, uc_mem_type type, uint64_t addr, int size, int64_t value, void *user) {
    hookMemAccess(handle, type, addr, size, value, user);
}

void hookInterrupt_cgo(uc_engine *handle, uint32_t intno, void *user) {
    hookInterrupt(handle, intno, user);
}

uint32_t hookX86In_cgo(uc_engine *handle, uint32_t port, uint32_t size, void *user) {
    return hookX86In(handle, port, size, user);
}

void hookX86Out_cgo(uc_engine *handle, uint32_t port, uint32_t size, uint32_t value, void *user) {
    hookX86Out(handle, port, size, value, user);
}

void hookX86Syscall_cgo(uc_engine *handle, void *user) {
    hookX86Syscall(handle, user);
}
