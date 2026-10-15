/*
 * FUN_100561c0 at 100561c0
 * undefined FUN_100561c0(void)
 * Address ranges: 100561c0-100562af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_100561c0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong extraout_x11;
  int extraout_w13;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = DAT_1009f7ac;
  auVar6 = FUN_10055d28(param_2);
  switch(*(undefined4 *)(extraout_w13 + 0xd2)) {
  default:
    uVar5 = 0;
    break;
  case 2:
    uVar5 = 1;
    break;
  case 3:
    uVar5 = 2;
    break;
  case 4:
    uVar5 = 3;
  }
  iVar2 = FUN_10079f50(0x3bc);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_10070eb8(iVar2,uVar1,uVar5);
    puVar4 = (undefined4 *)extraout_x11;
    *puVar4 = &PTR_FUN_10094ff0;
    puVar4[0xea] = 0;
    uVar3 = extraout_x11 & 0xffffffff;
    *(undefined1 (*) [16])(puVar4 + 0xeb) = auVar6;
    *(undefined8 *)(puVar4 + 0xda) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0xd8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0xde) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0xdc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0xe2) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0xe0) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0xe6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0xe4) = 0xffffffffffffffff;
    *(bool *)(puVar4 + 0xe9) = *(int *)*(undefined1 (*) [16])(puVar4 + 0xeb) == 5;
  }
  return uVar3;
}

