/*
 * FUN_18000d9e0 at 18000d9e0
 * undefined __cdecl FUN_18000d9e0(longlong param_1)
 * Address ranges: 18000d9e0-18000db63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d9e0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  FUN_180038c00(*(longlong *)(param_1 + 0x3340) + 0x12c0);
  puVar3 = *(undefined8 **)(param_1 + 0x3358);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500) + 0x18);
  uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb78);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180048a90(puVar3);
    FUN_180063700(puVar3);
  }
  FUN_18004c928(*(longlong *)(param_1 + 0x3330),*(longlong **)(param_1 + 0x3360));
  FUN_18004c928(*(longlong *)(param_1 + 0x3330),*(longlong **)(param_1 + 0x3380));
  *(undefined8 *)(param_1 + 0x3380) = 0;
  if (*(ulonglong *)(param_1 + 0x3398) != 0) {
    FUN_1800497b8(*(longlong *)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3398),(undefined *)0x0,1);
  }
  if (*(ulonglong *)(param_1 + 0x3390) != 0) {
    FUN_1800497b8(*(longlong *)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3390),(undefined *)0x0,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x3398) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3390) + 0x10))();
  *(undefined8 *)(param_1 + 0x3390) = 0;
  *(undefined8 *)(param_1 + 0x3398) = 0;
  FUN_18004c928(*(longlong *)(param_1 + 0x3330),*(longlong **)(param_1 + 0x3388));
  puVar3 = *(undefined8 **)(param_1 + 0x3348);
  *(undefined8 *)(param_1 + 0x3388) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004cd88(puVar3);
    FUN_180063700(puVar3);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x3378);
  *(undefined8 *)(param_1 + 0x3348) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_180048a90(puVar3);
    FUN_180063700(puVar3);
  }
  FUN_18004c928(*(longlong *)(param_1 + 0x3330),*(longlong **)(param_1 + 0x3368));
  FUN_18004c928(*(longlong *)(param_1 + 0x3330),*(longlong **)(param_1 + 0x3370));
  *(undefined8 *)(param_1 + 0x3378) = 0;
  *(undefined8 *)(param_1 + 0x3368) = 0;
  *(undefined8 *)(param_1 + 0x3370) = 0;
  FUN_18004dac8(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),*(uint *)(param_1 + 0x33a0),
                2,plVar2,uVar1);
  *(undefined4 *)(param_1 + 0x33a0) = 0xffffffff;
  return;
}

