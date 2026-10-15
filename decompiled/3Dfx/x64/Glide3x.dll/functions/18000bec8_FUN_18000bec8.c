/*
 * FUN_18000bec8 at 18000bec8
 * undefined __fastcall FUN_18000bec8(longlong param_1)
 * Address ranges: 18000bec8-18000c145
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000bec8(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  FUN_1800602b0(*(longlong *)(param_1 + 0x3340) + 0x12c0);
  puVar1 = *(undefined8 **)(param_1 + 0x3358);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500) + 0x18);
  uVar3 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb78);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180044964(puVar1);
    FUN_180060ac0(puVar1);
  }
  plVar4 = *(longlong **)(param_1 + 0x3360);
  if (plVar4 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(*(longlong *)(param_1 + 0x3330) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 0x3380);
  if (plVar4 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(*(longlong *)(param_1 + 0x3330) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  *(undefined8 *)(param_1 + 0x3380) = 0;
  if (*(ulonglong *)(param_1 + 0x3398) != 0) {
    FUN_1800454f8(*(longlong *)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3398),(undefined *)0x0,'\x01');
  }
  if (*(ulonglong *)(param_1 + 0x3390) != 0) {
    FUN_1800454f8(*(longlong *)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3390),(undefined *)0x0,'\x01');
  }
  (**(code **)(**(longlong **)(param_1 + 0x3398) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3390) + 0x10))();
  plVar4 = *(longlong **)(param_1 + 0x3388);
  *(undefined8 *)(param_1 + 0x3398) = 0;
  *(undefined8 *)(param_1 + 0x3390) = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(*(longlong *)(param_1 + 0x3330) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x3348);
  *(undefined8 *)(param_1 + 0x3388) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180048590(puVar1);
    FUN_180060ac0(puVar1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x3378);
  *(undefined8 *)(param_1 + 0x3348) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180044964(puVar1);
    FUN_180060ac0(puVar1);
  }
  plVar4 = *(longlong **)(param_1 + 0x3368);
  if (plVar4 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(*(longlong *)(param_1 + 0x3330) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 0x3370);
  if (plVar4 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(*(longlong *)(param_1 + 0x3330) + 0x1b500),(ulonglong)plVar4,'\x01'
                 );
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  *(undefined8 *)(param_1 + 0x3378) = 0;
  *(undefined8 *)(param_1 + 0x3368) = 0;
  *(undefined8 *)(param_1 + 0x3370) = 0;
  FUN_1800490cc(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),*(uint *)(param_1 + 0x33a0),
                2,plVar2,uVar3);
  *(undefined4 *)(param_1 + 0x33a0) = 0xffffffff;
  return;
}

