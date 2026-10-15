/*
 * FUN_100294c5 at 100294c5
 * int __thiscall FUN_100294c5(void * this, byte * param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 100294c5-10029579
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100294c5(void *this,byte *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_1002356c(this,(int)param_1);
  iVar5 = -0x7fffbffe;
  if (iVar2 != 0) {
    iVar5 = 0;
    FUN_10022ecc(this);
    if (*(int *)(iVar2 + 0x18) == 0) {
      iVar4 = (int)this + -4;
      if (this == (void *)0x0) {
        iVar4 = 0;
      }
      iVar5 = 0;
      do {
        if (*(int *)(param_1 + iVar5 * 4) != (&DAT_10062560)[iVar5]) {
          iVar3 = FUN_10060d16(param_1,(byte *)&DAT_10062570,0x10);
          iVar5 = -0x7fffbffe;
          if (iVar3 != 0) goto LAB_10029545;
          *(int *)(iVar2 + 0x18) = iVar4;
          goto LAB_10029543;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      *(int *)(iVar2 + 0x18) = iVar4;
LAB_10029543:
      iVar5 = 0;
    }
LAB_10029545:
    *(undefined4 *)this = 0;
    piVar1 = *(int **)(iVar2 + 0x10);
    iVar4 = *piVar1;
    if (-1 < iVar5) {
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      iVar4 = iVar4 + 1;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(iVar2 + 0x18);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar4;
    }
  }
  return iVar5;
}

