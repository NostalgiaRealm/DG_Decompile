/*
 * FUN_180019400 at 180019400
 * undefined __fastcall FUN_180019400(longlong param_1)
 * Address ranges: 180019400-18001967d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019400(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  FUN_18005eba0(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
  puVar1 = *(undefined8 **)(param_1 + 0x31d8);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500) + 0x18);
  uVar3 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0xb78);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180042800(puVar1);
    FUN_18005dbc0(puVar1);
  }
  plVar4 = *(longlong **)(param_1 + 0x31e0);
  if (plVar4 != (longlong *)0x0) {
    FUN_180043530(*(longlong **)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 0x3200);
  if (plVar4 != (longlong *)0x0) {
    FUN_180043530(*(longlong **)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  *(undefined8 *)(param_1 + 0x3200) = 0;
  if (*(ulonglong *)(param_1 + 0x3218) != 0) {
    FUN_180043394(*(longlong *)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3218),(undefined *)0x0,'\x01');
  }
  if (*(ulonglong *)(param_1 + 0x3210) != 0) {
    FUN_180043394(*(longlong *)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3210),(undefined *)0x0,'\x01');
  }
  (**(code **)(**(longlong **)(param_1 + 0x3218) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3210) + 0x10))();
  plVar4 = *(longlong **)(param_1 + 0x3208);
  *(undefined8 *)(param_1 + 0x3218) = 0;
  *(undefined8 *)(param_1 + 0x3210) = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_180043530(*(longlong **)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x31c8);
  *(undefined8 *)(param_1 + 0x3208) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004642c(puVar1);
    FUN_18005dbc0(puVar1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x31f8);
  *(undefined8 *)(param_1 + 0x31c8) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180042800(puVar1);
    FUN_18005dbc0(puVar1);
  }
  plVar4 = *(longlong **)(param_1 + 0x31e8);
  if (plVar4 != (longlong *)0x0) {
    FUN_180043530(*(longlong **)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 0x31f0);
  if (plVar4 != (longlong *)0x0) {
    FUN_180043530(*(longlong **)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  *(undefined8 *)(param_1 + 0x31f8) = 0;
  *(undefined8 *)(param_1 + 0x31e8) = 0;
  *(undefined8 *)(param_1 + 0x31f0) = 0;
  FUN_180046f68(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),*(uint *)(param_1 + 0x3220),
                2,plVar2,uVar3);
  *(undefined4 *)(param_1 + 0x3220) = 0xffffffff;
  return;
}

