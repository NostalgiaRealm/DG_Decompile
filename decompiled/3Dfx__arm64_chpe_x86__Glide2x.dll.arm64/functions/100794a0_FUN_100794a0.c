/*
 * FUN_100794a0 at 100794a0
 * undefined FUN_100794a0(void)
 * Address ranges: 100794a0-100795e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100794a0(int param_1)

{
  code *pcVar1;
  undefined4 *extraout_w8;
  undefined4 *puVar2;
  code *extraout_w11;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = *(uint *)(param_1 + 0x3c);
  uVar4 = 0;
  if (uVar3 != 0) {
    if (uVar3 == 0) {
      piVar5 = (int *)&DAT_00000008;
      goto LAB_10079504;
    }
    do {
      piVar5 = (int *)(*(int *)(param_1 + 0x38) + uVar4 * 0x18 + 0x10);
LAB_10079504:
      puVar2 = (undefined4 *)*piVar5;
      if (puVar2[1] != 0) {
        uVar3 = 0;
        do {
          (*pcVar1)();
          (*extraout_w11)(param_1,*extraout_w8);
          puVar2 = (undefined4 *)*piVar5;
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)puVar2[1]);
      }
      if (puVar2 != (undefined4 *)0x0) {
        FUN_1007a060(*puVar2);
        FUN_10079ff0(puVar2,0xc);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x3c));
  }
  FUN_1007a060(*(undefined4 *)(param_1 + 0x34));
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  FUN_1007a060(*(undefined4 *)(param_1 + 0x44));
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  (*(code *)PTR_FUN_1009d034)(param_1 + 0x18);
  return;
}

