/*
 * FUN_180019468 at 180019468
 * undefined __cdecl FUN_180019468(longlong param_1)
 * Address ranges: 180019468-1800195eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019468(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  FUN_180043140(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  puVar3 = *(undefined8 **)(param_1 + 0x31d8);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500) + 0x18);
  uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0xb78);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180044f00(puVar3);
    FUN_18005fbc8(puVar3);
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
  puVar3 = *(undefined8 **)(param_1 + 0x31c8);
  *(undefined8 *)(param_1 + 0x3208) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1800491f8(puVar3);
    FUN_18005fbc8(puVar3);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x31f8);
  *(undefined8 *)(param_1 + 0x31c8) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180044f00(puVar3);
    FUN_18005fbc8(puVar3);
  }
  FUN_180048d98(*(longlong *)(param_1 + 0x31b0),*(longlong **)(param_1 + 0x31e8));
  FUN_180048d98(*(longlong *)(param_1 + 0x31b0),*(longlong **)(param_1 + 0x31f0));
  *(undefined8 *)(param_1 + 0x31f8) = 0;
  *(undefined8 *)(param_1 + 0x31e8) = 0;
  *(undefined8 *)(param_1 + 0x31f0) = 0;
  FUN_180049f38(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),*(uint *)(param_1 + 0x3220),
                2,plVar2,uVar1);
  *(undefined4 *)(param_1 + 0x3220) = 0xffffffff;
  return;
}

