/*
 * FUN_18001adf0 at 18001adf0
 * undefined __cdecl FUN_18001adf0(longlong param_1)
 * Address ranges: 18001adf0-18001b043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001adf0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_50 [4];
  
  local_50[0] = param_1 + 0x3c50;
  local_50[1] = param_1 + 0x6c90;
  local_50[2] = param_1 + 0x9cd0;
  iVar2 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      lVar5 = local_50[iVar2];
      FUN_180043140(*(longlong *)(*(longlong *)(lVar5 + 0x3028) + 0x31c0) + 0x12c0);
      FUN_180048d98(*(longlong *)(*(longlong *)(lVar5 + 0x3028) + 0x31b0),
                    *(longlong **)(lVar5 + 0x3038));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  FUN_180030fd8(param_1 + 0x3b60);
  FUN_180021c20((longlong *)(param_1 + 0x34e8));
  FUN_180043140(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  puVar1 = *(undefined8 **)(param_1 + 0x31d8);
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500) + 0x18);
  uVar3 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0xb78);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180044f00(puVar1);
    FUN_18005fbc8(puVar1);
  }
  FUN_180048d98(*(longlong *)(param_1 + 0x31b0),*(longlong **)(param_1 + 0x31e0));
  FUN_180048d98(*(longlong *)(param_1 + 0x31b0),*(longlong **)(param_1 + 0x3200));
  *(undefined8 *)(param_1 + 0x3200) = 0;
  if (*(ulonglong *)(param_1 + 0x3218) != 0) {
    FUN_180045c28(*(longlong *)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3218),(undefined *)0x0,1);
  }
  if (*(ulonglong *)(param_1 + 0x3210) != 0) {
    FUN_180045c28(*(longlong *)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3210),(undefined *)0x0,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x3218) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3210) + 0x10))();
  *(undefined8 *)(param_1 + 0x3210) = 0;
  *(undefined8 *)(param_1 + 0x3218) = 0;
  FUN_180048d98(*(longlong *)(param_1 + 0x31b0),*(longlong **)(param_1 + 0x3208));
  puVar1 = *(undefined8 **)(param_1 + 0x31c8);
  *(undefined8 *)(param_1 + 0x3208) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800491f8(puVar1);
    FUN_18005fbc8(puVar1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x31f8);
  *(undefined8 *)(param_1 + 0x31c8) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180044f00(puVar1);
    FUN_18005fbc8(puVar1);
  }
  FUN_180048d98(*(longlong *)(param_1 + 0x31b0),*(longlong **)(param_1 + 0x31e8));
  FUN_180048d98(*(longlong *)(param_1 + 0x31b0),*(longlong **)(param_1 + 0x31f0));
  *(undefined8 *)(param_1 + 0x31f8) = 0;
  *(undefined8 *)(param_1 + 0x31e8) = 0;
  *(undefined8 *)(param_1 + 0x31f0) = 0;
  FUN_180049f38(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),*(uint *)(param_1 + 0x3220),
                2,plVar4,uVar3);
  *(undefined4 *)(param_1 + 0x3220) = 0xffffffff;
  if (*(ulonglong *)(param_1 + 0x3228) != 0) {
    FUN_180045c28(*(longlong *)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3228),(undefined *)0x0,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x3228) + 0x10))();
  *(undefined8 *)(param_1 + 0x3228) = 0;
  FUN_180047cc8(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8));
  return;
}

