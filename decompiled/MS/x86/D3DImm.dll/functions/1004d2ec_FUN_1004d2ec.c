/*
 * FUN_1004d2ec at 1004d2ec
 * undefined4 __stdcall FUN_1004d2ec(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1004d2ec-1004d356
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004d2ec(int param_1,int param_2,undefined4 *param_3)

{
  void *this;
  BOOL BVar1;
  int iVar2;
  undefined4 *extraout_EDX;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_44 [16];
  
  this = *(void **)(param_1 + 4);
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x80070057;
  if ((param_2 != 0) && (param_3 != (undefined4 *)0x0)) {
    FUN_10013726(local_44,param_3);
    puVar4 = local_44;
    puVar5 = extraout_EDX;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_10045e36(this,(int)extraout_EDX,extraout_EDX);
    uVar3 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

