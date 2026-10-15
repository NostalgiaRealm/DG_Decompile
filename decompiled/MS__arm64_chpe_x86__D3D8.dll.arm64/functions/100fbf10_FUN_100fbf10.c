/*
 * FUN_100fbf10 at 100fbf10
 * undefined FUN_100fbf10(void)
 * Address ranges: 100fbf10-100fc0ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100fbf10(int param_1)

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
  pcStack_6c = FUN_100fb990;
  local_54 = (*(code *)PTR_FUN_10134028)(4);
  local_4c = u_DGVOODOOCOMM_1012f880;
  uStack_50 = 0;
  sVar3 = (*(code *)PTR_FUN_10134250)(&local_70);
  if (sVar3 != 0) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    piVar1 = (int *)(param_1 + 0x314);
    iVar4 = (*(code *)PTR_FUN_10134188)
                      (0,u_DGVOODOOCOMM_1012f880,&local_90,0,0x80000000,0x80000000,0x80000000,
                       0x80000000,0xfffffffd);
    *piVar1 = iVar4;
    (*(code *)PTR_FUN_1013423c)(auStack_b0,0,0,0,0);
    uVar2 = DAT_1013d288;
    if (*piVar1 != 0) {
      *(undefined1 *)(param_1 + 0x758) = 1;
      (*(code *)PTR_FUN_101340fc)(uVar2);
      iVar4 = (*(code *)PTR_FUN_101341d4)(auStack_b0,0,0,0);
      while (0 < iVar4) {
        (*(code *)PTR_FUN_10134294)(auStack_b0);
        (*(code *)PTR_FUN_1013419c)(auStack_b0);
        iVar4 = (*(code *)PTR_FUN_101341d4)(auStack_b0,0,0,0);
      }
      FUN_100fb8e0(param_1);
      (*(code *)PTR_FUN_10134198)(*piVar1);
      *piVar1 = 0;
    }
    (*(code *)PTR_FUN_1013429c)(sVar3,0);
  }
  uVar2 = DAT_1013d288;
  *(undefined1 *)(param_1 + 0x758) = 0;
  (*(code *)PTR_FUN_101340fc)(uVar2);
  return 1;
}

