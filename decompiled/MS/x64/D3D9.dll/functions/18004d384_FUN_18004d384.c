/*
 * FUN_18004d384 at 18004d384
 * undefined __fastcall FUN_18004d384(longlong * param_1, int param_2, longlong param_3, longlong param_4, longlong param_5, uint param_6, undefined4 param_7, uint * param_8, uint param_9, int param_10, char param_11, char param_12)
 * Address ranges: 18004d384-18004d48d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d384(longlong *param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
                  uint param_6,undefined4 param_7,uint *param_8,uint param_9,int param_10,
                  char param_11,char param_12)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 in_stack_ffffffffffffff14;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98 [14];
  
  FUN_180048cf0((longlong)param_1);
  local_a8 = (undefined8 *)(-(ulonglong)(param_4 != 0) & param_4 - 0x30U);
  if ((*(byte *)((longlong)param_1 + 0x7654) & 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xeca);
  }
  FUN_180058054(local_a8,local_98,(ulonglong)uVar1);
  local_a0 = *(undefined4 *)(param_3 + 0x10);
  puVar2 = (undefined1 *)(param_4 + 0x1c);
  if (param_4 == 0) {
    puVar2 = &DAT_0000004c;
  }
  FUN_180060c98(param_1,param_2,param_3,'\0',&local_a8,param_5,param_6,
                CONCAT44(in_stack_ffffffffffffff14,param_7),param_8,param_9,param_10,param_11,
                param_12,0,*puVar2);
  return;
}

