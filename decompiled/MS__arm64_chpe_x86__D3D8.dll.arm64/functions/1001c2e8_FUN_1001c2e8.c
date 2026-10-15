/*
 * FUN_1001c2e8 at 1001c2e8
 * undefined FUN_1001c2e8(void)
 * Address ranges: 1001c2e8-1001c40b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001c2e8(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8876086c;
  if (param_3 < *(ushort *)(param_1 + 0x30)) {
    puVar1 = (uint *)&DAT_00000b0c;
    if (*(int *)(param_1 + 0x14) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x14) + -0x4dd4);
    }
    if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar2 = true;
      iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar3 == 0) {
        FUN_10006560(0);
      }
    }
    uVar4 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x38) + (param_3 + param_2 * 0x10) * 4);
    if ((*(uint *)(*(int *)(iVar3 + 4) + 0xb8) >> 0xb & 1) != 0) {
      uVar4 = FUN_10019130(iVar3,0);
    }
    if (bVar2) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar4;
}

