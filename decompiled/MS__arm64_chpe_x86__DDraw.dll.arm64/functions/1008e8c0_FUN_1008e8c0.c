/*
 * FUN_1008e8c0 at 1008e8c0
 * undefined FUN_1008e8c0(void)
 * Address ranges: 1008e8c0-1008ea9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1008e8c0(int param_1)

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
  pcStack_6c = FUN_1008e340;
  local_54 = (*(code *)PTR_FUN_100ba044)(4);
  local_4c = u_DGVOODOOCOMM_100b6430;
  uStack_50 = 0;
  sVar3 = (*(code *)PTR_FUN_100ba28c)(&local_70);
  if (sVar3 != 0) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    piVar1 = (int *)(param_1 + 0x314);
    iVar4 = (*(code *)PTR_FUN_100ba1bc)
                      (0,u_DGVOODOOCOMM_100b6430,&local_90,0,0x80000000,0x80000000,0x80000000,
                       0x80000000,0xfffffffd);
    *piVar1 = iVar4;
    (*(code *)PTR_FUN_100ba274)(auStack_b0,0,0,0,0);
    uVar2 = DAT_100c2a80;
    if (*piVar1 != 0) {
      *(undefined1 *)(param_1 + 0x758) = 1;
      (*(code *)PTR_FUN_100ba12c)(uVar2);
      iVar4 = (*(code *)PTR_FUN_100ba20c)(auStack_b0,0,0,0);
      while (0 < iVar4) {
        (*(code *)PTR_FUN_100ba2dc)(auStack_b0);
        (*(code *)PTR_FUN_100ba1d0)(auStack_b0);
        iVar4 = (*(code *)PTR_FUN_100ba20c)(auStack_b0,0,0,0);
      }
      FUN_1008e298(param_1);
      (*(code *)PTR_FUN_100ba1cc)(*piVar1);
      *piVar1 = 0;
    }
    (*(code *)PTR_FUN_100ba2e8)(sVar3,0);
  }
  uVar2 = DAT_100c2a80;
  *(undefined1 *)(param_1 + 0x758) = 0;
  (*(code *)PTR_FUN_100ba12c)(uVar2);
  return 1;
}

