/*
 * FUN_1004c598 at 1004c598
 * int __thiscall FUN_1004c598(void * this, uint param_1, RECT * param_2, uint param_3, int * param_4)
 * Address ranges: 1004c598-1004c6e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004c598(void *this,uint param_1,RECT *param_2,uint param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  iVar2 = -0x7789fcfa;
  if (*(void **)((int)this + 0x84) != (void *)0x0) {
    iVar2 = *(int *)((int)this + 0x88);
    uVar5 = 0;
    piVar4 = (int *)0x0;
    if (iVar2 != 0) {
      if ((*(uint *)(iVar2 + 200) == 0) || ((char)param_4 == '\0')) {
        uVar5 = (((int)(*(float *)(iVar2 + 0x90) * 255.0) << 8 |
                 (int)(*(float *)(iVar2 + 0x84) * 255.0)) << 8 |
                (int)(*(float *)(iVar2 + 0x88) * 255.0)) << 8 |
                (int)(*(float *)(iVar2 + 0x8c) * 255.0);
      }
      else {
        piVar3 = (int *)FUN_1003f50e(*(void **)((int)this + 0x84),*(uint *)(iVar2 + 200));
        if ((piVar3 == (int *)0x0) ||
           (iVar2 = (**(code **)(*piVar3 + 0x38))(), (*(uint *)(iVar2 + 0x68) & 0x1000) != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        piVar4 = (int *)0x0;
        if (bVar1) {
          piVar4 = piVar3;
        }
      }
    }
    param_4 = (int *)0x0;
    if ((piVar4 != (int *)0x0) &&
       ((**(code **)(*piVar4 + 0x34))(&DAT_1005d2a0,&param_4,0), param_4 == (int *)0x0)) {
      piVar4 = (int *)0x0;
    }
    iVar2 = FUN_10043a4c(*(void **)((int)this + 0x84),param_1,param_2,param_3 & 0xfffffffb,uVar5,
                         0x3f800000,0,param_4,piVar4,(int)this + 0xa4);
    if (iVar2 == -0x7789f7ea) {
      iVar2 = FUN_10043a4c(*(void **)((int)this + 0x84),param_1,param_2,param_3 & 0xfffffff9,uVar5,
                           0x3f800000,0,param_4,piVar4,(int)this + 0xa4);
    }
  }
  return iVar2;
}

