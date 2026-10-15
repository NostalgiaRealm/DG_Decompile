/*
 * FUN_180221ec0 at 180221ec0
 * undefined FUN_180221ec0(void)
 * Address ranges: 180221ec0-180221edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180221ec0(longlong param_1)

{
  undefined *puVar1;
  code *extraout_x11;
  int local_70 [2];
  undefined1 auStack_68 [56];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  local_70[0] = *(int *)(param_1 + 0x200);
  if (0 < local_70[0]) {
    do {
      thunk_FUN_180223c0c(auStack_68,0,0,0,0x400000);
      (*(code *)puVar1)();
      (*extraout_x11)((int *)(param_1 + 0x200),local_70,4,5);
      local_70[0] = *(int *)(param_1 + 0x200);
    } while (0 < local_70[0]);
  }
  return;
}

