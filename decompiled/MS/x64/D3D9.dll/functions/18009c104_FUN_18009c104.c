/*
 * FUN_18009c104 at 18009c104
 * bool __fastcall FUN_18009c104(longlong param_1, int param_2, int param_3, longlong * param_4, undefined4 * param_5, uint * param_6)
 * Address ranges: 18009c104-18009c25b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18009c104(longlong param_1,int param_2,int param_3,longlong *param_4,undefined4 *param_5,
                  uint *param_6)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_res8 [4];
  ulonglong local_38;
  ulonglong local_30;
  
  lVar2 = *(longlong *)(param_1 + 0xd4);
  if (lVar2 != 0) {
    uVar11 = (ulonglong)(uint)(param_3 * *(int *)(param_1 + 0x3c) + param_2);
    if ((*(uint *)(param_1 + 0x2c) - 0x24 & 0xfffffffa) == 0) {
      uVar5 = *(uint *)(&DAT_1800ff000 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      if (*(uint *)(&DAT_1800ff000 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4) == 0x18) {
        uVar5 = 0x20;
      }
      lVar10 = uVar11 * 0x20;
      if (*(longlong *)(lVar10 + lVar2) == 0) {
        uVar1 = *(uint *)(param_1 + 0x28);
        bVar3 = (byte)param_2 & 0x1f;
        uVar6 = *(uint *)(param_1 + 0x24) >> bVar3;
        bVar4 = (byte)param_2 & 0x1f;
        uVar9 = uVar1 >> bVar4;
        if (*(uint *)(param_1 + 0x24) >> bVar3 == 0) {
          uVar6 = 1;
        }
        *(uint *)(lVar10 + 8 + lVar2) = uVar6 * uVar5 >> 3;
        if (uVar1 >> bVar4 == 0) {
          uVar9 = 1;
        }
        uVar8 = thunk_FUN_1800fbccc((ulonglong)
                                    (uVar9 * *(int *)(lVar10 + 8 + *(longlong *)(param_1 + 0xd4))));
        *(undefined8 *)(lVar10 + *(longlong *)(param_1 + 0xd4)) = uVar8;
      }
      *param_4 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0xd4));
      *param_5 = *(undefined4 *)(lVar10 + 8 + *(longlong *)(param_1 + 0xd4));
      if (param_6 != (uint *)0x0) {
        *param_6 = uVar5 >> 3;
      }
    }
    else {
      lVar10 = uVar11 * 0x20;
      local_38 = (ulonglong)*(uint *)(lVar10 + lVar2);
      local_30 = (ulonglong)(uint)(*(int *)(lVar10 + 4 + lVar2) + *(int *)(lVar10 + lVar2));
      local_res8[0] = 0;
      iVar7 = (**(code **)(**(longlong **)(param_1 + 0xc4) + 0x40))
                        (*(longlong **)(param_1 + 0xc4),0,&local_38,local_res8);
      if (-1 < iVar7) {
        *param_4 = (ulonglong)*(uint *)(lVar10 + *(longlong *)(param_1 + 0xd4)) + local_res8[0];
        *param_5 = *(undefined4 *)(lVar10 + 8 + *(longlong *)(param_1 + 0xd4));
      }
    }
  }
  return *param_4 != 0;
}

