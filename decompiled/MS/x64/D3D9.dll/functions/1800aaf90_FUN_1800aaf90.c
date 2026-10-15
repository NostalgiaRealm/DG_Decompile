/*
 * FUN_1800aaf90 at 1800aaf90
 * undefined __fastcall FUN_1800aaf90(longlong * param_1, longlong * param_2)
 * Address ranges: 1800aaf90-1800ab0de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aaf90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_98;
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if ((*(char *)((longlong)param_2 + 0x2c) != '\0') && (*(char *)((longlong)param_2 + 0x2d) == '\0')
     ) {
    (**(code **)(*param_1 + 0x150))();
    (**(code **)(*param_1 + 0x90))(param_1,&local_a8,*(undefined4 *)((longlong)param_2 + 0x1c));
    lVar1 = param_1[1];
    if ((int)param_2[2] < 4) {
      local_50 = *(undefined4 *)(&DAT_1800fe9d8 + (longlong)(int)param_2[2] * 4);
    }
    else {
      local_50 = 0;
    }
    local_38 = *(undefined4 *)(lVar1 + 0xde);
    local_3c = *(undefined4 *)(lVar1 + 0xda);
    local_44 = *(undefined1 *)(lVar1 + 0x26);
    local_4c = *(undefined4 *)(&DAT_180100388 + (longlong)*(int *)(lVar1 + 0xce) * 4);
    local_58 = *(undefined4 *)(&DAT_1801003a0 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
    local_78 = *(undefined8 *)*param_2;
    local_80 = (undefined4)param_1[5];
    local_70 = local_a8;
    local_6c = local_a4;
    local_68 = *(undefined4 *)((longlong)param_2 + 0x24);
    local_64 = (undefined4)param_2[5];
    local_60 = local_98;
    local_48 = (uint)(*(int *)((longlong)param_2 + 0x14) == 1);
    local_43 = *(int *)(lVar1 + 0x18) == 1;
    local_5c = 1;
    local_54 = 0;
    local_40 = 0;
    local_88 = param_1;
    plVar2 = FUN_1800dfe90(*(LARGE_INTEGER *)(param_1 + 4),&local_88);
    if (plVar2 != (longlong *)0x0) {
      FUN_1800aad74((longlong)param_1,param_2);
      *param_2 = (longlong)plVar2;
      *(undefined1 *)((longlong)param_2 + 0x2d) = 1;
      FUN_1800e05b4((longlong *)param_1[4],*plVar2,0);
    }
  }
  return;
}

