/*
 * FUN_1000b6c0 at 1000b6c0
 * undefined FUN_1000b6c0(void)
 * Address ranges: 1000b6c0-1000b84f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000b6c0(int param_1,ulonglong param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  undefined4 *extraout_w8;
  uint uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = (int)param_2;
  if (*(int *)(&DAT_000057b8 + param_1) != iVar1 || param_3 != '\0') {
    if (iVar1 != 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_2 & 0xffffffff);
      (&DAT_000058bc)[param_1] = 1;
      param_2 = extraout_x1;
    }
    if (*(int *)(&DAT_000057b8 + param_1) != 0) {
      *(undefined1 *)(*(int *)(&DAT_000057b8 + param_1) + 0x48) = 0;
      uVar3 = (*pcVar2)();
      (*extraout_w11_00)(uVar3);
      param_2 = extraout_x1_00;
    }
    *(int *)(&DAT_000057b8 + param_1) = iVar1;
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined4 *)(param_1 + 0x5894) = uVar3;
    if (iVar1 == 0) {
      uVar3 = (*pcVar2)();
      (*extraout_w11_02)(uVar3,0,0);
      uVar4 = *(uint *)(&DAT_00005898 + param_1) & 0xfffffffe;
    }
    else {
      *(undefined2 *)(iVar1 + 0x48) = 0x101;
      uVar3 = (*pcVar2)(*(undefined4 *)(param_1 + 0x14),param_2,*(int *)(iVar1 + 0x38) == 0x66);
      (*extraout_w11_01)(uVar3,*extraout_w8);
      uVar4 = *(uint *)(&DAT_00005898 + param_1) & 0xfffffffe;
      if (*(int *)(iVar1 + 0xc) != 0) {
        uVar4 = *(uint *)(&DAT_00005898 + param_1) | 1;
      }
    }
    *(uint *)(&DAT_00005898 + param_1) = uVar4;
  }
  return 1;
}

