/*
 * FUN_180092988 at 180092988
 * undefined FUN_180092988(void)
 * Address ranges: 180092988-180092aeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180092988(longlong param_1,uint param_2,int param_3,longlong *param_4,undefined4 *param_5,
                  uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  lVar7 = *(longlong *)(param_1 + 0xd4);
  if (lVar7 != 0) {
    lVar4 = (ulonglong)(param_2 + *(int *)(param_1 + 0x3c) * param_3) * 0x20;
    if ((*(uint *)(param_1 + 0x2c) - 0x24 & 0xfffffffa) == 0) {
      uVar1 = *(uint *)(&DAT_180231470 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      if (uVar1 == 0x18) {
        uVar1 = 0x20;
      }
      if (*(longlong *)(lVar7 + lVar4) == 0) {
        uVar2 = *(uint *)(param_1 + 0x24) >> (ulonglong)(param_2 & 0x1f);
        if (uVar2 == 0) {
          uVar2 = 1;
        }
        uVar3 = *(uint *)(param_1 + 0x28) >> (ulonglong)(param_2 & 0x1f);
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        *(uint *)(lVar7 + lVar4 + 8) = uVar2 * uVar1 >> 3;
        uVar6 = thunk_FUN_180102f80(*(int *)(lVar4 + *(longlong *)(param_1 + 0xd4) + 8) * uVar3);
        *(undefined8 *)(*(longlong *)(param_1 + 0xd4) + lVar4) = uVar6;
      }
      *param_4 = *(longlong *)(*(longlong *)(param_1 + 0xd4) + lVar4);
      *param_5 = *(undefined4 *)(lVar4 + *(longlong *)(param_1 + 0xd4) + 8);
      if (param_6 != (uint *)0x0) {
        *param_6 = uVar1 >> 3;
      }
    }
    else {
      local_48 = (ulonglong)*(uint *)(lVar7 + lVar4);
      local_50 = 0;
      local_40 = (ulonglong)(uint)(*(int *)(lVar7 + lVar4 + 4) + *(int *)(lVar7 + lVar4));
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0xc4) + 0x40))
                        (*(longlong **)(param_1 + 0xc4),0,&local_48,&local_50);
      if (-1 < iVar5) {
        *param_4 = local_50 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xd4) + lVar4);
        *param_5 = *(undefined4 *)(lVar4 + *(longlong *)(param_1 + 0xd4) + 8);
      }
    }
  }
  return *param_4 != 0;
}

