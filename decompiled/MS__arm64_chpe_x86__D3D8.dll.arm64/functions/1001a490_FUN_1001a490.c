/*
 * FUN_1001a490 at 1001a490
 * undefined FUN_1001a490(void)
 * Address ranges: 1001a490-1001a563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1001a490(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  int in_stack_00000010;
  undefined4 in_stack_00000018;
  int local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (in_stack_00000010 == 0) {
    in_stack_00000010 = *(int *)(param_1 + 0x48);
  }
  uStack_14 = *(undefined4 *)(param_1 + 0x7c);
  local_10 = *(undefined4 *)(param_1 + 0x10);
  uStack_c = *(undefined4 *)(param_1 + 0xc);
  local_8 = *(undefined4 *)(param_1 + 0x6c);
  uStack_4 = *(undefined4 *)(param_1 + 0x70);
  local_20 = in_stack_00000010;
  uStack_1c = param_5;
  local_18 = param_6;
  uVar1 = FUN_10034528(param_1,&local_20,*(undefined4 *)(param_1 + 0x44),param_2,param_5,param_6,
                       param_7,param_8,in_stack_00000018);
  return uVar1;
}

