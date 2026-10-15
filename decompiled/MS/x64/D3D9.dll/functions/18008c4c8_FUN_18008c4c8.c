/*
 * FUN_18008c4c8 at 18008c4c8
 * undefined8 * __fastcall FUN_18008c4c8(longlong param_1, longlong param_2, undefined4 param_3, undefined4 param_4, int param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9, undefined8 * param_10)
 * Address ranges: 18008c4c8-18008c605
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18008c4c8(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,int param_5,
             int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 != 0) {
    puVar1 = FUN_1800aaccc(param_1,param_2);
    if (puVar1 == (undefined8 *)0x0) {
      uVar6 = 0;
      uVar4 = 0;
      uVar3 = 1;
      uVar5 = 1;
    }
    else {
      uVar6 = *(undefined4 *)(puVar1 + 4);
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
      uVar5 = *(undefined4 *)(puVar1 + 5);
      if (param_6 == 2) {
        param_6 = *(int *)(puVar1 + 3);
      }
      if (param_7 == 2) {
        param_7 = *(int *)((longlong)puVar1 + 0x14);
      }
    }
    puVar1 = (undefined8 *)FUN_1800fbccc(0x140);
    if ((puVar1 != (undefined8 *)0x0) &&
       (puVar1 = FUN_180093300(puVar1,param_1,*(undefined8 *)(param_1 + 8),uVar4,uVar6,param_2,
                               param_3,param_4,uVar3,uVar5,param_8,param_9,param_5,param_6,param_7),
       puVar1 != (undefined8 *)0x0)) {
      uVar2 = FUN_180093624((longlong)puVar1,param_10);
      if ((char)uVar2 != '\0') {
        return puVar1 + 0x1c;
      }
      FUN_1800934f8((longlong)(puVar1 + 0x1c));
    }
  }
  return (undefined8 *)0x0;
}

