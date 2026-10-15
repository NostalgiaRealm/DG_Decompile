/*
 * FUN_180013dec at 180013dec
 * undefined __fastcall FUN_180013dec(longlong param_1)
 * Address ranges: 180013dec-180014051
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180013dec(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res8;
  int iStackX_c;
  uint local_res10;
  int iStackX_14;
  
  lVar1 = **(longlong **)(param_1 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x29f0);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x620));
  lVar9 = 0;
  if (*(uint *)(lVar2 + 0x650) != 0) {
    uVar6 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x648) + uVar6 * 8);
      if (*plVar3 == lVar1) {
        lVar9 = plVar3[0x1ae];
        break;
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)(lVar2 + 0x650));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x620));
  if (lVar9 == param_1) {
    uVar6 = FUN_180052840(*(longlong *)(*(longlong *)(param_1 + 8) + 0x29f0),
                          *(longlong *)(param_1 + 0x10));
    bVar4 = (byte)uVar6;
    if (((bVar4 == 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8), 0xfffffff7 < *(uint *)(lVar1 + 0x37)
        )) && (((*(uint *)(lVar1 + 0x37) == *(uint *)(lVar1 + 0x3b) &&
                (*(int *)(lVar1 + 0x37) != -7)) || (*(uint *)(lVar1 + 0x3b) < 0x100)))) {
      if (*(int *)(lVar1 + 8) == 0) {
        uVar8 = FUN_1800140b4(param_1);
      }
      else {
        uVar8 = *(int *)(lVar1 + 8) - 1;
      }
      FUN_18000af7c(*(longlong *)(param_1 + 8),&local_res8,uVar8,0);
      FUN_18000afd0(*(longlong *)(param_1 + 8),&local_res10,(ulonglong)uVar8,&local_res8,0);
      FUN_1800141ac(param_1,&local_res8);
      lVar1 = *(longlong *)(param_1 + 8);
      if ((((local_res8 != *(uint *)(lVar1 + 0xb0)) || (iStackX_c != *(int *)(lVar1 + 0xb4))) ||
          (local_res10 != *(uint *)(lVar1 + 0xb8))) || (iStackX_14 != *(int *)(lVar1 + 0xbc))) {
        *(uint *)(lVar1 + 0xb0) = local_res8;
        *(int *)(*(longlong *)(param_1 + 8) + 0xb4) = iStackX_c;
        *(uint *)(*(longlong *)(param_1 + 8) + 0xb8) = local_res10;
        *(int *)(*(longlong *)(param_1 + 8) + 0xbc) = iStackX_14;
        FUN_180011e10(*(longlong **)(param_1 + 8));
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    uVar8 = *(uint *)(lVar1 + 0xc2) >> 2 & 1;
    if (bVar4 == 0) {
      uVar8 = *(uint *)(lVar1 + 0xc6) & 1 | 2;
    }
    uVar7 = FUN_1800528a0(*(LPCRITICAL_SECTION *)(*(longlong *)(param_1 + 8) + 0x29f0),
                          *(undefined8 **)(param_1 + 0x10),uVar8,*(int *)(lVar1 + 8));
    if ((char)uVar7 != '\0') {
      if (bVar4 == 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        FUN_180052e58(*(longlong *)(lVar1 + 0x29f0),*(longlong *)(param_1 + 0x10),
                      lVar1 + 0x1de8 +
                      (-(ulonglong)(*(char *)(*(longlong *)(lVar1 + 8) + 0x50) != '\0') &
                      0xfffffffffffff400),(undefined8 *)(lVar1 + 0x29e8));
      }
      FUN_18000ad64(*(longlong *)(param_1 + 8),bVar4 ^ 1);
      cVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x10) + 8))();
      if (cVar5 != '\0') {
        *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x20) = bVar4;
        (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10))();
      }
      *(byte *)(param_1 + 0x12e) = bVar4 ^ 1;
    }
    FUN_1800131a0(param_1);
  }
  return;
}

