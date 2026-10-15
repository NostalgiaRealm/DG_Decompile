/*
 * FUN_1801208c0 at 1801208c0
 * undefined FUN_1801208c0(void)
 * Address ranges: 1801208c0-1801209ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801208c0(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  uint param_5,int param_6,int param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  
  lVar1 = *param_2 + (ulonglong)(uint)((int)param_2[1] * param_7);
  puVar2 = (undefined8 *)(param_4 + (ulonglong)*(byte *)(param_3 + 3) * 4);
  cVar3 = *(char *)(param_3 + 1);
  if (cVar3 == '\x01') {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      uVar5 = FUN_18012a7c0(lVar1,*(undefined1 *)((longlong)param_2 + 0xc));
      *(undefined4 *)puVar2 = uVar5;
      puVar2 = (undefined8 *)((longlong)puVar2 + (ulonglong)param_5);
      lVar1 = lVar1 + (ulonglong)*(uint *)(param_2 + 1);
    }
  }
  else if (cVar3 == '\x02') {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      uVar4 = FUN_18012a7c0(lVar1,*(undefined1 *)((longlong)param_2 + 0xc));
      *puVar2 = uVar4;
      puVar2 = (undefined8 *)((longlong)puVar2 + (ulonglong)param_5);
      lVar1 = lVar1 + (ulonglong)*(uint *)(param_2 + 1);
    }
  }
  else if (cVar3 == '\x03') {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      FUN_18012a7c0(lVar1,*(undefined1 *)((longlong)param_2 + 0xc));
      *puVar2 = CONCAT44(extraout_var_00,extraout_s0_00);
      *(undefined4 *)(puVar2 + 1) = extraout_var_02;
      puVar2 = (undefined8 *)((longlong)puVar2 + (ulonglong)param_5);
      lVar1 = lVar1 + (ulonglong)*(uint *)(param_2 + 1);
    }
  }
  else if (cVar3 == '\x04') {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      FUN_18012a7c0(lVar1,*(undefined1 *)((longlong)param_2 + 0xc));
      puVar2[1] = CONCAT44(extraout_var_03,extraout_var_01);
      *puVar2 = CONCAT44(extraout_var,extraout_s0);
      puVar2 = (undefined8 *)((longlong)puVar2 + (ulonglong)param_5);
      lVar1 = lVar1 + (ulonglong)*(uint *)(param_2 + 1);
    }
  }
  return;
}

