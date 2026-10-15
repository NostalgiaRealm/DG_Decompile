/*
 * FUN_18005ea88 at 18005ea88
 * ulonglong __cdecl FUN_18005ea88(undefined8 param_1, int * param_2)
 * Address ranges: 18005ea88-18005ec53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005ea88(undefined8 param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar1 = param_2[8];
  uVar10 = param_2[9];
  if (uVar10 == 0) {
    uVar10 = 1;
  }
  uVar11 = (ulonglong)uVar10;
  if (iVar1 - 0x17U < 0x19) goto LAB_18005eb88;
  if ((iVar1 - 0x5eU < 0x14) || (iVar1 - 0x46U < 0xf)) {
LAB_18005eb24:
    lVar8 = 1;
    lVar5 = 1;
    lVar9 = 1;
    lVar7 = 1;
  }
  else if (iVar1 - 9U < 0xe) {
    lVar8 = 8;
    lVar5 = 8;
    lVar9 = 8;
    lVar7 = 8;
  }
  else if (iVar1 - 0x30U < 0xc) {
LAB_18005eb60:
    lVar8 = 2;
    lVar5 = 2;
    lVar9 = 2;
    lVar7 = 2;
  }
  else {
    if (iVar1 - 0x3cU < 7) goto LAB_18005eb24;
    if (iVar1 - 0x57U < 7) {
LAB_18005eb88:
      lVar8 = 4;
      lVar5 = 4;
      lVar9 = 4;
      lVar7 = 4;
    }
    else if (iVar1 - 1U < 4) {
      lVar8 = 0x10;
      lVar5 = 0x10;
      lVar9 = 0x10;
      lVar7 = 0x10;
    }
    else {
      if (3 < iVar1 - 5U) {
        if (2 < iVar1 - 0x43U) {
          if ((iVar1 - 0x55U < 2) || (iVar1 - 0x72U < 2)) goto LAB_18005eb60;
          goto LAB_18005eb24;
        }
        goto LAB_18005eb88;
      }
      lVar8 = 0xc;
      lVar5 = 0xc;
      lVar9 = 0xc;
      lVar7 = 0xc;
    }
  }
  iVar1 = *param_2;
  if (iVar1 == 1) {
    uVar11 = *(longlong *)(param_2 + 4) * lVar8;
  }
  else if (iVar1 == 2) {
    uVar11 = *(longlong *)(param_2 + 4) * lVar5 * uVar11;
  }
  else {
    if (iVar1 == 3) {
      uVar4 = 4;
      uVar11 = (ulonglong)(uint)param_2[6] * *(longlong *)(param_2 + 4) * lVar9 * uVar11;
      goto LAB_18005ec20;
    }
    if (iVar1 == 4) {
      uVar4 = 8;
      uVar11 = (ulonglong)*(ushort *)(param_2 + 7) * (ulonglong)(uint)param_2[6] *
               *(longlong *)(param_2 + 4) * lVar7 * uVar11;
      goto LAB_18005ec20;
    }
    uVar11 = 0;
  }
  uVar4 = 2;
LAB_18005ec20:
  uVar10 = 1;
  uVar6 = uVar11;
  if (1 < *(ushort *)((longlong)param_2 + 0x1e)) {
    do {
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18005ec3c);
        (*pcVar3)();
      }
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar6 / uVar4;
      }
      uVar10 = uVar10 + 1;
      uVar11 = uVar2 + uVar11;
      uVar6 = uVar2;
    } while (uVar10 < *(ushort *)((longlong)param_2 + 0x1e));
  }
  return uVar11;
}

