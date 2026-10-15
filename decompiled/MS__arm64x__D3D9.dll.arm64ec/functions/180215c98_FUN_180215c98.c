/*
 * FUN_180215c98 at 180215c98
 * undefined FUN_180215c98(void)
 * Address ranges: 180215c98-180215e4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180215c98(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  if (*(longlong *)(lVar2 + 0x2250) != 0) {
    FUN_180146600();
  }
  lVar3 = *(longlong *)(lVar2 + 0x2248);
  *(undefined8 *)(lVar2 + 0x2250) = 0;
  if (lVar3 != 0) {
    FUN_18020c468(lVar3);
    FUN_1802229d8(lVar3,0x78);
  }
  lVar3 = *(longlong *)(lVar2 + 0x2240);
  *(undefined8 *)(lVar2 + 0x2248) = 0;
  if (lVar3 != 0) {
    FUN_18020c468(lVar3);
    FUN_1802229d8(lVar3,0x78);
  }
  lVar3 = *(longlong *)(lVar2 + 0x2238);
  *(undefined8 *)(lVar2 + 0x2240) = 0;
  if (lVar3 != 0) {
    FUN_18020c468(lVar3);
    FUN_1802229d8(lVar3,0x78);
  }
  lVar3 = *(longlong *)(lVar2 + 0x2230);
  *(undefined8 *)(lVar2 + 0x2238) = 0;
  if (lVar3 != 0) {
    FUN_18020c468(lVar3);
    FUN_1802229d8(lVar3,0x78);
  }
  *(undefined8 *)(lVar2 + 0x2230) = 0;
  if (*(longlong *)(lVar2 + 0x2378) != 0) {
    FUN_180206a20(param_1);
    FUN_180206a20(param_1,*(undefined8 *)(lVar2 + 0x2370));
    FUN_180206a20(param_1,*(undefined8 *)(lVar2 + 0x2398));
    FUN_180206a20(param_1,*(undefined8 *)(lVar2 + 0x2388));
    FUN_180206a20(param_1,*(undefined8 *)(lVar2 + 0x2390));
    FUN_180206a20(param_1,*(undefined8 *)(lVar2 + 0x2380));
    iVar1 = *(int *)(lVar2 + 0x236c);
    *(undefined8 *)(lVar2 + 0x2370) = 0;
    *(undefined8 *)(lVar2 + 0x2378) = 0;
    *(undefined8 *)(lVar2 + 0x2390) = 0;
    *(undefined8 *)(lVar2 + 0x2398) = 0;
    *(undefined8 *)(lVar2 + 0x2380) = 0;
    *(undefined8 *)(lVar2 + 0x2388) = 0;
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(lVar2 + 0x2238);
      thunk_FUN_1802236f8(lVar3 + 0x28);
      FUN_18020c678(lVar3,iVar1,2);
      thunk_FUN_18022370c(lVar3 + 0x28);
    }
    iVar1 = *(int *)(lVar2 + 0x2368);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(lVar2 + 0x2230);
      thunk_FUN_1802236f8(lVar3 + 0x28);
      FUN_18020c678(lVar3,iVar1,2);
      thunk_FUN_18022370c(lVar3 + 0x28);
    }
    *(undefined4 *)(lVar2 + 0x2368) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x236c) = 0xffffffff;
  }
  if (*(longlong *)(lVar2 + 0x908) != 0) {
    FUN_180146480(*(longlong *)(lVar2 + 0x908),1);
  }
  *(undefined8 *)(lVar2 + 0x908) = 0;
  if (*(longlong *)(lVar2 + 0x910) != 0) {
    FUN_180146480(*(longlong *)(lVar2 + 0x910),1);
  }
  *(undefined8 *)(lVar2 + 0x910) = 0;
  return;
}

