/*
 * FUN_10044180 at 10044180
 * undefined FUN_10044180(void)
 * Address ranges: 10044180-1004423b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10044180(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  uVar2 = 0x80070057;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    uVar2 = 0x887601c2;
    if (*(char *)(param_1 + 8) == '\0') {
      uVar2 = 0x8876023c;
      iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
      if (iVar1 == 0) {
        FUN_10001c10(0);
      }
      if (*(int *)(param_1 + 0x108) != 0) {
        *param_2 = *(int *)(param_1 + 0x108);
        uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar2);
        uVar2 = 0;
      }
      (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
    }
  }
  return uVar2;
}

