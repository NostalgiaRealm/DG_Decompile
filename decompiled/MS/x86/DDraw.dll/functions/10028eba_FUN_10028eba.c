/*
 * FUN_10028eba at 10028eba
 * undefined __stdcall FUN_10028eba(int param_1, int param_2)
 * Address ranges: 10028eba-10028f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028eba(int param_1,int param_2)

{
  void *this;
  int iVar1;
  undefined4 extraout_ECX;
  int yBottom;
  tagRECT local_38;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  uint uStack_1c;
  LONG local_18 [3];
  undefined4 local_c;
  
  this = (void *)FUN_100252c0(param_1);
  if (this != (void *)0x0) {
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = *(undefined4 *)(param_2 + 0x18);
    local_c = *(undefined4 *)(param_2 + 0x1c);
    if (*(int **)((int)this + 0xf4) == (int *)0x0) {
      iVar1 = *(int *)((int)this + 0x11c) * 0x228;
      yBottom = *(int *)(&DAT_1006c430 + iVar1);
      iVar1 = *(int *)(&DAT_1006c42c + iVar1);
    }
    else {
      iVar1 = (**(code **)(**(int **)((int)this + 0xf4) + 0x38))();
      yBottom = *(int *)(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    SetRect(&local_38,0,0,iVar1,yBottom);
    FUN_100253c5(this,&iStack_28);
    local_38.right = (uint)(iStack_28 * local_38.right) / uStack_24;
    local_38.bottom = (uint)(iStack_20 * local_38.bottom) / uStack_1c;
    FUN_10025448(this,param_2,extraout_ECX,extraout_ECX,local_18,&local_38.left);
  }
  return;
}

