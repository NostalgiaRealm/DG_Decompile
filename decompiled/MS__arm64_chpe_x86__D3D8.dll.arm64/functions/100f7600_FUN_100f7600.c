/*
 * FUN_100f7600 at 100f7600
 * undefined FUN_100f7600(void)
 * Address ranges: 100f7600-100f772f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100f7600(int param_1,int param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_40 [16];
  
  param_4[1] = 0;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 2) = 0;
  if (param_3 < 2) {
    piVar1 = (int *)(param_1 + 4);
    uVar5 = FUN_100ddba8(*piVar1,param_2,param_3 + 1);
    if ((uVar5 & 1) != 0) {
      iVar2 = *piVar1 + *(int *)(param_2 + 8) * 0x16c0;
      *(undefined4 *)param_4 = *(undefined4 *)(param_2 + param_3 * 4 + 0xd7c);
      puVar3 = (undefined4 *)
               FUN_100dfee0(*(undefined4 *)(iVar2 + 0x1c98),auStack_40,
                            *(undefined4 *)(param_2 + 0xd84),param_3);
      *(undefined4 *)(param_4 + 1) = *puVar3;
      puVar3 = (undefined4 *)
               FUN_100dfee0(*(undefined4 *)(iVar2 + 0x1c9c),auStack_40,
                            *(undefined4 *)(param_2 + 0xd88),param_3);
      *(undefined4 *)((int)param_4 + 0xc) = *puVar3;
      uVar4 = FUN_100ec878(*(undefined4 *)(*piVar1 + 0x172c0),*(undefined4 *)param_4);
      *(undefined4 *)((int)param_4 + 4) = uVar4;
      *(undefined4 *)(param_4 + 2) = *(undefined4 *)(&DAT_1012ea00 + *(int *)(param_2 + 0x2c) * 4);
      return 1;
    }
  }
  return 0;
}

