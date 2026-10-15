/*
 * FUN_180050ec8 at 180050ec8
 * bool __cdecl FUN_180050ec8(ulonglong param_1, ulonglong param_2, longlong * param_3, int param_4, int param_5, undefined8 * param_6)
 * Address ranges: 180050ec8-180050fdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180050ec8(ulonglong param_1,ulonglong param_2,longlong *param_3,int param_4,int param_5,
                  undefined8 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 *local_70;
  longlong lStack_68;
  longlong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  undefined8 uStack_48;
  
  lStack_68 = 0;
  local_70 = (undefined8 *)0x0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    uVar5 = (ulonglong)(uint)(param_5 - param_4);
    bVar4 = FUN_18005bf08(param_3,param_5 - param_4,(longlong *)&local_70);
    if (bVar4) {
      thunk_FUN_1800010d8(local_70,param_6,uVar5);
      goto LAB_180050f38;
    }
  }
  uVar5 = local_50 & 0xffffffff;
LAB_180050f38:
  uVar3 = uStack_58;
  lVar2 = local_60;
  lVar1 = lStack_68;
  bVar4 = lStack_68 != 0;
  if (bVar4) {
    FUN_18005c5d8((longlong)param_3,(int)uVar5,local_60,uStack_58,
                  *(longlong **)(*(longlong *)(param_1 + 0xb10) + 0x18),
                  *(ulonglong *)(param_1 + 0xb78));
    FUN_18004ec28(param_1,param_2,0,1,0x400);
    FUN_18004e320(param_1);
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x78))
              (*(longlong **)(param_1 + 0x688),param_2,param_4,lVar1,lVar2 - uVar3,uVar5);
    FUN_18004e370(param_1);
  }
  return bVar4;
}

