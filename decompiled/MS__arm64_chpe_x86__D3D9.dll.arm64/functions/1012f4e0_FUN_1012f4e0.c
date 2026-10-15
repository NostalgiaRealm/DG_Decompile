/*
 * FUN_1012f4e0 at 1012f4e0
 * undefined FUN_1012f4e0(void)
 * Address ranges: 1012f4e0-1012f6bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1012f4e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  code *pcStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  wchar16 *local_4c;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_70 = 3;
  pcStack_6c = FUN_1012ef60;
  local_54 = (*(code *)PTR_FUN_1016c028)(4);
  local_4c = u_DGVOODOOCOMM_101666e0;
  uStack_50 = 0;
  sVar3 = (*(code *)PTR_FUN_1016c250)(&local_70);
  if (sVar3 != 0) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    piVar1 = (int *)(param_1 + 0x314);
    iVar4 = (*(code *)PTR_FUN_1016c188)
                      (0,u_DGVOODOOCOMM_101666e0,&local_90,0,0x80000000,0x80000000,0x80000000,
                       0x80000000,0xfffffffd);
    *piVar1 = iVar4;
    (*(code *)PTR_FUN_1016c23c)(auStack_b0,0,0,0,0);
    uVar2 = DAT_10175c58;
    if (*piVar1 != 0) {
      *(undefined1 *)(param_1 + 0x758) = 1;
      (*(code *)PTR_FUN_1016c0fc)(uVar2);
      iVar4 = (*(code *)PTR_FUN_1016c1d4)(auStack_b0,0,0,0);
      while (0 < iVar4) {
        (*(code *)PTR_FUN_1016c294)(auStack_b0);
        (*(code *)PTR_FUN_1016c19c)(auStack_b0);
        iVar4 = (*(code *)PTR_FUN_1016c1d4)(auStack_b0,0,0,0);
      }
      FUN_1012eeb0(param_1);
      (*(code *)PTR_FUN_1016c198)(*piVar1);
      *piVar1 = 0;
    }
    (*(code *)PTR_FUN_1016c29c)(sVar3,0);
  }
  uVar2 = DAT_10175c58;
  *(undefined1 *)(param_1 + 0x758) = 0;
  (*(code *)PTR_FUN_1016c0fc)(uVar2);
  return 1;
}

