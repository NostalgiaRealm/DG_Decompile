/*
 * FUN_1002e5f8 at 1002e5f8
 * char __thiscall FUN_1002e5f8(void * this, int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1002e5f8-1002e6d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1002e5f8(void *this,int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char local_19;
  LPVOID local_18;
  int local_14;
  
  local_19 = '\0';
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  cVar1 = '\0';
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_100ad475(0xc0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar5 = param_3;
      puVar6 = puVar2 + 4;
      for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    *(undefined4 **)((int)this + 0xc) = puVar2;
    cVar1 = local_19;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_1002d6f1(&local_18,0x100);
      FUN_1005d186(*(undefined4 *)((int)this + 0x1c),(int)param_3,(int *)&local_18);
      uVar3 = FUN_1002e58b(param_1,param_2,local_18,local_14 - (int)local_18,param_3,extraout_ECX,
                           (uint *)((int)this + 0x2c),(uint *)((int)this + 0x30));
      cVar1 = (char)uVar3;
      if ((cVar1 == '\0') &&
         (puVar2 = *(undefined4 **)((int)this + 0xc), puVar2 != (undefined4 *)0x0)) {
        FUN_10007c30(puVar2);
        FUN_100ad48c(puVar2);
      }
      thunk_FUN_100ad48c(local_18);
    }
  }
  return cVar1;
}

