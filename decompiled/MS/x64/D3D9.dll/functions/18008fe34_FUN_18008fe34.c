/*
 * FUN_18008fe34 at 18008fe34
 * undefined1 __fastcall FUN_18008fe34(longlong param_1, undefined8 param_2, int param_3, longlong param_4, int param_5, int * param_6)
 * Address ranges: 18008fe34-18008ffd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_18008fe34(longlong param_1,undefined8 param_2,int param_3,longlong param_4,int param_5,
             int *param_6)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined7 extraout_var;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  int local_res8 [8];
  longlong local_88;
  undefined1 local_80 [64];
  
  plVar1 = (longlong *)(param_1 + -0xe0);
  uVar6 = 0;
  FUN_1800dfe48(*(longlong *)(param_1 + -0x90),param_2,(longlong)plVar1);
  local_88 = 0;
  local_res8[0] = 0;
  cVar2 = FUN_18008f558(plVar1,(int)param_2,param_3,1,'\x01',&local_88,local_res8);
  if ((int)CONCAT71(extraout_var,cVar2) == 0) {
    (**(code **)(**(longlong **)(param_1 + -0x28) + 0x50))(*(longlong **)(param_1 + -0x28),local_80)
    ;
    uVar7 = (ulonglong)*(uint *)(param_1 + -0xb4);
    lVar8 = 0x180000000;
    uVar5 = *(uint *)(&DAT_1800ff000 + uVar7 * 4);
    if (*(uint *)(&DAT_1800ff000 + uVar7 * 4) == 0x18) {
      uVar5 = 0x20;
    }
    uVar9 = *(uint *)(&DAT_1800fea30 + uVar7 * 4);
    if (7 < uVar5) {
      uVar9 = uVar5 >> 3;
    }
    uVar3 = FUN_1800ac71c((longlong)plVar1,*(uint *)(param_1 + -0xbc),(byte)param_2);
    if (uVar5 < 8) {
      uVar3 = uVar3 / *(byte *)(uVar7 + 0xfead8 + lVar8);
    }
    uVar5 = param_6[1];
    bVar10 = uVar5 == param_6[3];
    if (uVar5 <= (uint)param_6[3]) {
      iVar4 = *param_6;
      do {
        if (bVar10) {
          uVar3 = param_6[2];
        }
        FUN_1800fbec0((undefined8 *)
                      ((ulonglong)(iVar4 * uVar9) + (ulonglong)(uVar5 * param_5) + param_4),
                      (undefined8 *)
                      ((ulonglong)(uVar5 * local_res8[0]) + (ulonglong)(iVar4 * uVar9) + local_88),
                      (ulonglong)((uVar3 - iVar4) * uVar9));
        iVar4 = 0;
        uVar5 = uVar5 + 1;
        bVar10 = uVar5 == param_6[3];
      } while (uVar5 <= (uint)param_6[3]);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
    (**(code **)(*plVar1 + 0x78))
              (plVar1,*(undefined8 *)(param_1 + -0x28),
               (int)param_2 + param_3 * *(int *)(param_1 + -0xa4));
    uVar6 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + -0x90) + 0x620));
  return uVar6;
}

