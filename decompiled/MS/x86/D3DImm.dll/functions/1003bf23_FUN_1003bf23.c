/*
 * FUN_1003bf23 at 1003bf23
 * undefined4 __thiscall FUN_1003bf23(void * this, void * param_1, uint param_2, char param_3)
 * Address ranges: 1003bf23-1003c0c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003bf23(void *this,void *param_1,uint param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  LPVOID local_28 [4];
  undefined4 *local_18;
  int local_14;
  
  if (*(char *)(param_2 + 0x193) != '\0') {
    cVar5 = '\0';
    uVar4 = 0;
    do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&DAT_1003c0cb)[uVar4]) {
      case 0:
        *(char *)(param_2 + 0x11c + uVar4) = cVar5;
        cVar5 = cVar5 + '\x01';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xf);
  }
  FUN_10019cac(&local_18,0x200);
  puVar1 = (uint *)(param_2 + 0x10);
  iVar2 = FUN_10057e43((int *)&local_18,*puVar1);
  FUN_100581f6(*puVar1,(int *)&local_18);
  FUN_10019cac(local_28,0x80);
  FUN_1003bd1c(this,(int *)local_28,param_2,param_3);
  FUN_10057c8a((int *)puVar1,(int *)local_28,0x3e);
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    FUN_10058272(*puVar1,(int *)&local_18);
  }
  if ((*(uint *)(param_2 + 0x18) >> 2 & 1) != 0) {
    FUN_10058272(*puVar1,(int *)&local_18);
  }
  uVar4 = 0;
  if (*(char *)(param_2 + 0x193) == '\0') {
    if (*(int *)(param_2 + 300) != 0) {
      do {
        FUN_10058330((int *)&local_18);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_2 + 300));
    }
  }
  else {
    do {
      if (*(char *)(param_2 + 0x10c + uVar4) != '\0') {
        FUN_10058330((int *)&local_18);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xf);
  }
  FUN_10037d41((int *)&local_18,param_2);
  if (*(char *)(param_2 + 0x45) != '\0') {
    FUN_10057d33((int *)&local_18,2);
  }
  FUN_10057e94((int *)&local_18,(int *)local_28,iVar2);
  FUN_10057cf9(param_1,local_18,local_14 - (int)local_18);
  thunk_FUN_1005c76c(local_28[0]);
  uVar3 = thunk_FUN_1005c76c(local_18);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

