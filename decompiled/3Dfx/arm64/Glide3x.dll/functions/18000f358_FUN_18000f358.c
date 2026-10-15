/*
 * FUN_18000f358 at 18000f358
 * undefined __cdecl FUN_18000f358(longlong param_1)
 * Address ranges: 18000f358-18000f5ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000f358(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_50 [4];
  
  local_50[0] = param_1 + 0x4770;
  local_50[1] = param_1 + 0x77b0;
  local_50[2] = param_1 + 0xa7f0;
  iVar2 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      lVar5 = local_50[iVar2];
      FUN_180038c00(*(longlong *)(*(longlong *)(lVar5 + 0x3028) + 0x3340) + 0x12c0);
      FUN_18004c928(*(longlong *)(*(longlong *)(lVar5 + 0x3028) + 0x3330),
                    *(longlong **)(lVar5 + 0x3038));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  FUN_180025798(param_1 + 0x42a0);
  FUN_180015f00((longlong *)(param_1 + 0x3668));
  FUN_180038c00(*(longlong *)(param_1 + 0x3340) + 0x12c0);
  puVar1 = *(undefined8 **)(param_1 + 0x3358);
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500) + 0x18);
  uVar3 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb78);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180048a90(puVar1);
    FUN_180063700(puVar1);
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
  puVar1 = *(undefined8 **)(param_1 + 0x3348);
  *(undefined8 *)(param_1 + 0x3388) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004cd88(puVar1);
    FUN_180063700(puVar1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x3378);
  *(undefined8 *)(param_1 + 0x3348) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180048a90(puVar1);
    FUN_180063700(puVar1);
  }
  FUN_18004c928(*(longlong *)(param_1 + 0x3330),*(longlong **)(param_1 + 0x3368));
  FUN_18004c928(*(longlong *)(param_1 + 0x3330),*(longlong **)(param_1 + 0x3370));
  *(undefined8 *)(param_1 + 0x3378) = 0;
  *(undefined8 *)(param_1 + 0x3368) = 0;
  *(undefined8 *)(param_1 + 0x3370) = 0;
  FUN_18004dac8(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),*(uint *)(param_1 + 0x33a0),
                2,plVar4,uVar3);
  *(undefined4 *)(param_1 + 0x33a0) = 0xffffffff;
  if (*(ulonglong *)(param_1 + 0x33a8) != 0) {
    FUN_1800497b8(*(longlong *)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x33a8),(undefined *)0x0,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x33a8) + 0x10))();
  *(undefined8 *)(param_1 + 0x33a8) = 0;
  FUN_18004b858(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338));
  return;
}

