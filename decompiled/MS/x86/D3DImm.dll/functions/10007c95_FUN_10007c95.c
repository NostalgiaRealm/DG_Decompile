/*
 * FUN_10007c95 at 10007c95
 * undefined __thiscall FUN_10007c95(void * this, uint param_1, int * param_2)
 * Address ranges: 10007c95-10007d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007c95(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  float *pfVar5;
  float local_90 [32];
  
  piVar2 = param_2;
  if (*(char *)((int)this + 0x224) == '\0') {
    FUN_100082ab((void *)((int)this + 0x14c),&param_1,param_2);
    pfVar5 = FUN_10008ec8(local_90,param_2);
    FUN_100081ef((void *)((int)this + 0x15c),&param_1,pfVar5);
    FUN_100067bc(this,param_1,param_2);
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4);
    *(undefined1 *)((int)param_2 + 0x6d) = 1;
    iVar4 = FUN_10008310((void *)(iVar1 + 0x9cc),&param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)(iVar4 + 0x6c);
    }
    *(undefined1 *)(piVar2 + 0x1b) = uVar3;
    FUN_1000834a((void *)(iVar1 + 0x9cc),&param_1,piVar2);
  }
  return;
}

