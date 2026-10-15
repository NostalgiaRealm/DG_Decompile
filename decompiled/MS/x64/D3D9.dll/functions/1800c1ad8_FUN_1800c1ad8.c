/*
 * FUN_1800c1ad8 at 1800c1ad8
 * undefined8 * __fastcall FUN_1800c1ad8(longlong param_1, undefined8 * param_2, ulonglong * param_3, undefined4 param_4, byte param_5)
 * Address ranges: 1800c1ad8-1800c1b9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800c1ad8(longlong param_1,undefined8 *param_2,ulonglong *param_3,undefined4 param_4,
             byte param_5)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = param_1 - 8;
  uVar3 = 0;
  puVar2 = (undefined8 *)
           FUN_1800acdf0(*(longlong *)(param_1 + 0x170),0,0,uVar4,param_2,0,0,param_4,param_5,0,0,
                         *(undefined8 *)(param_1 + 0x80),0,0);
  if (puVar2 != (undefined8 *)0x0) {
    if ((puVar2[1] != 0) &&
       (cVar1 = FUN_1800148d4((longlong)puVar2,param_3,uVar3,uVar4), cVar1 != '\0')) {
      *(int *)(puVar2[1] + 0x104) = *(int *)(puVar2[1] + 0x104) + 1;
      LOCK();
      *(int *)((longlong)puVar2 + 0xac) = *(int *)((longlong)puVar2 + 0xac) + 1;
      UNLOCK();
      return puVar2;
    }
    FUN_1800c0fbc(puVar2);
    FUN_1800fbcf0(puVar2);
  }
  return (undefined8 *)0x0;
}

