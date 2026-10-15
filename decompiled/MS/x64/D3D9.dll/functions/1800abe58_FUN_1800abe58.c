/*
 * FUN_1800abe58 at 1800abe58
 * undefined1 __fastcall FUN_1800abe58(longlong param_1, longlong param_2, undefined4 * param_3, char param_4)
 * Address ranges: 1800abe58-1800abfca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800abe58(longlong param_1,longlong param_2,undefined4 *param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  uVar4 = 0;
  lVar3 = param_1;
  plVar1 = FUN_1800aaccc(param_1,param_2);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(lVar3 + 8);
    if ((int)plVar1[2] < 4) {
      local_70 = *(undefined4 *)(&DAT_1800fe9d8 + (longlong)(int)plVar1[2] * 4);
    }
    else {
      local_70 = 0;
    }
    local_58 = *(undefined4 *)(lVar3 + 0xde);
    local_5c = *(undefined4 *)(lVar3 + 0xda);
    local_64 = *(undefined1 *)(lVar3 + 0x26);
    local_6c = *(undefined4 *)(&DAT_180100388 + (longlong)*(int *)(lVar3 + 0xce) * 4);
    local_78 = *(undefined4 *)(&DAT_1801003a0 + (longlong)*(int *)(lVar3 + 0x1c) * 4);
    local_a0 = *(undefined4 *)(param_1 + 0x28);
    local_90 = *param_3;
    local_8c = param_3[1];
    local_88 = *(undefined4 *)((longlong)plVar1 + 0x24);
    local_84 = (undefined4)plVar1[5];
    local_80 = param_3[2];
    local_7c = param_3[3];
    local_68 = (uint)(*(int *)((longlong)plVar1 + 0x14) == 1);
    local_63 = *(int *)(lVar3 + 0x18) == 1;
    local_74 = 0;
    local_60 = 0;
    local_a8 = param_1;
    local_98 = param_2;
    plVar2 = FUN_1800dfe90(*(LARGE_INTEGER *)(param_1 + 0x20),&local_a8);
    if (plVar2 != (longlong *)0x0) {
      *plVar1 = (longlong)plVar2;
      FUN_1800e05b4(*(longlong **)(param_1 + 0x20),*plVar2,0);
      FUN_1800aad08(param_1,(ulonglong)*(uint *)((longlong)plVar1 + 0x1c),(longlong)plVar2);
      if (param_4 == '\0') {
        FUN_1800aad74(param_1,plVar1);
      }
      FUN_1800aadd0(param_1,(ulonglong)*(uint *)((longlong)plVar1 + 0x1c),(longlong)plVar2);
      *(undefined1 *)((longlong)plVar1 + 0x2d) = 1;
      uVar4 = 1;
    }
  }
  return uVar4;
}

