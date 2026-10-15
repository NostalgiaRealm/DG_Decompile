/*
 * FUN_1800579ec at 1800579ec
 * undefined8 __fastcall FUN_1800579ec(longlong param_1, ulonglong param_2, int * param_3)
 * Address ranges: 1800579ec-180057b7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800579ec(longlong param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  LPVOID pvVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar14 = (param_2 & 0xffffffff) * 0x1ac0;
  lVar1 = lVar3 + lVar14;
  uVar8 = FUN_1800409ac(param_1,param_3);
  uVar2 = *(uint *)(lVar3 + 0x229c + lVar14);
  uVar12 = 0;
  if (uVar2 != 0) {
    uVar10 = 0;
    uVar13 = uVar2;
    do {
      uVar9 = uVar13 + uVar10 >> 1;
      uVar12 = (ulonglong)uVar9;
      uVar4 = *(ulonglong *)(*(longlong *)(lVar1 + 0x2290) + uVar12 * 0x158);
      if (uVar4 <= uVar8) {
        if (uVar8 <= uVar4) break;
        uVar10 = uVar9 + 1;
        uVar12 = (ulonglong)uVar10;
        uVar9 = uVar13;
      }
      uVar13 = uVar9;
    } while (uVar13 != uVar10);
  }
  if ((uint)uVar12 != uVar2) {
    lVar5 = *(longlong *)(lVar1 + 0x2290);
    lVar11 = uVar12 * 0x158;
    if (*(ulonglong *)(lVar11 + lVar5) == uVar8) {
      if ((((*param_3 != *(int *)(lVar11 + 8 + lVar5)) ||
           (param_3[1] != *(int *)(lVar11 + 0xc + lVar5))) ||
          (iVar7 = FUN_18005f350((byte *)(param_3 + 2),(byte *)(lVar5 + 0x10 + lVar11),0x28),
          iVar7 != 0)) ||
         (((iVar7 = FUN_18005f350((byte *)(param_3 + 0xc),(byte *)(lVar5 + 0x38 + lVar11),0x28),
           iVar7 != 0 ||
           (iVar7 = FUN_18005f350((byte *)(param_3 + 0x16),(byte *)(lVar5 + 0x60 + lVar11),0x28),
           iVar7 != 0)) ||
          (iVar7 = FUN_18005f350((byte *)(param_3 + 0x20),(byte *)(lVar5 + 0x88 + lVar11),0x28),
          iVar7 != 0)))) {
        pvVar6 = *(LPVOID *)(lVar11 + 0x150 + lVar5);
        FUN_1800419c8(*(longlong **)(lVar3 + 0x22a0 + lVar14),(longlong)pvVar6);
        FUN_18005d720(pvVar6);
        FUN_18001b190((longlong *)(lVar1 + 0x2290),uVar12,uVar8,(undefined8 *)param_3);
      }
      goto LAB_180057b54;
    }
  }
  FUN_18001afa0((longlong *)(lVar1 + 0x2290),(uint)uVar12,uVar8,(undefined8 *)param_3);
LAB_180057b54:
  return *(undefined8 *)(uVar12 * 0x158 + 0x150 + *(longlong *)(lVar1 + 0x2290));
}

