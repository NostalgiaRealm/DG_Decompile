/*
 * FUN_180059d68 at 180059d68
 * undefined8 __fastcall FUN_180059d68(longlong param_1)
 * Address ranges: 180059d68-180059e9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180059d68(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined4 extraout_var_00;
  ulonglong uVar6;
  undefined7 extraout_var;
  ulonglong uVar7;
  undefined1 uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_158 [280];
  
  uVar8 = 1;
  if ((DAT_18006cab8 & 1) == 0) {
    DAT_18006cab8 = DAT_18006cab8 | 1;
    _DAT_18006c9b0 = 0x6d99cbf4;
    _DAT_18006c9c0 = 0x446f;
    _DAT_18006c9b4 = 0xbc2bdf05;
    _DAT_18006c9b8 = 0x9bd05598;
    _DAT_18006c9bc = 0x50b94372;
  }
  uVar3 = *(ushort *)(param_1 + 0x58) >> 1;
  uVar6 = (ulonglong)uVar3;
  if (uVar3 == 9) {
    uVar7 = 0;
    do {
      iVar5 = FUN_18005f6f0((uint)*(ushort *)(*(longlong *)(param_1 + 0x60) + uVar7 * 2));
      sVar4 = (short)iVar5 - (&DAT_180065200)[uVar7];
      uVar6 = CONCAT62((int6)(CONCAT44(extraout_var_00,iVar5) >> 0x10),sVar4);
      if (sVar4 != (&DAT_18006c9b0)[uVar7]) goto LAB_180059e84;
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
    } while (uVar9 < 9);
    if (uVar9 == 9) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar6 = (ulonglong)*(int *)(lVar1 + 0x3c);
      if (*(int *)(uVar6 + 0x8c + lVar1) != 0) {
        uVar12 = (ulonglong)*(uint *)(uVar6 + 0x88 + lVar1);
        uVar7 = 0;
        uVar9 = *(uint *)(uVar12 + 0x20 + lVar1);
        if (*(int *)(uVar12 + 0x18 + lVar1) != 0) {
          do {
            uVar6 = 0;
            uVar11 = 0;
            pcVar10 = (char *)((ulonglong)*(uint *)((ulonglong)uVar9 + lVar1 + uVar7 * 4) + lVar1);
            cVar2 = *pcVar10;
            while (cVar2 != '\0') {
              iVar5 = FUN_18005f700((int)pcVar10[uVar6]);
              local_158[uVar6] = (char)iVar5;
              uVar11 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar11;
              cVar2 = pcVar10[uVar6];
            }
            cVar2 = FUN_180059d1c((longlong)local_158,uVar11);
            uVar6 = CONCAT71(extraout_var,cVar2);
            if (cVar2 != '\0') goto LAB_180059e87;
            uVar11 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar11;
          } while (uVar11 < *(uint *)(uVar12 + 0x18 + lVar1));
        }
      }
    }
  }
LAB_180059e84:
  uVar8 = 0;
LAB_180059e87:
  return CONCAT71((int7)(uVar6 >> 8),uVar8);
}

