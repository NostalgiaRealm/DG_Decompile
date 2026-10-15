/*
 * FUN_10007180 at 10007180
 * undefined FUN_10007180(void)
 * Address ranges: 10007180-1000735f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10007180(int param_1)

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
  pcStack_6c = FUN_10006c00;
  local_54 = (*(code *)__hybrid_CompilerIAT)(4);
  local_4c = u_DGVOODOOCOMM_10095610;
  uStack_50 = 0;
  sVar3 = (*(code *)PTR_FUN_1009d1d0)(&local_70);
  if (sVar3 != 0) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    piVar1 = (int *)(param_1 + 0x314);
    iVar4 = (*(code *)PTR_FUN_1009d144)
                      (0,u_DGVOODOOCOMM_10095610,&local_90,0,0x80000000,0x80000000,0x80000000,
                       0x80000000,0xfffffffd);
    *piVar1 = iVar4;
    (*(code *)PTR_FUN_1009d1c0)(auStack_b0,0,0,0,0);
    uVar2 = DAT_1009f7b8;
    if (*piVar1 != 0) {
      *(undefined1 *)(param_1 + 0x758) = 1;
      (*(code *)PTR_FUN_1009d0c4)(uVar2);
      iVar4 = (*(code *)PTR_FUN_1009d170)(auStack_b0,0,0,0);
      while (0 < iVar4) {
        (*(code *)PTR_FUN_1009d204)(auStack_b0);
        (*(code *)PTR_FUN_1009d150)(auStack_b0);
        iVar4 = (*(code *)PTR_FUN_1009d170)(auStack_b0,0,0,0);
      }
      FUN_10006b58(param_1);
      (*(code *)PTR_FUN_1009d14c)(*piVar1);
      *piVar1 = 0;
    }
    (*(code *)PTR_FUN_1009d20c)(sVar3,0);
  }
  uVar2 = DAT_1009f7b8;
  *(undefined1 *)(param_1 + 0x758) = 0;
  (*(code *)PTR_FUN_1009d0c4)(uVar2);
  return 1;
}

