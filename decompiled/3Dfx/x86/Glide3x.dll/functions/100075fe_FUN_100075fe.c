/*
 * FUN_100075fe at 100075fe
 * undefined __thiscall FUN_100075fe(void * this, void * param_1, int param_2, undefined4 param_3, char param_4)
 * Address ranges: 100075fe-10007677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100075fe(void *this,void *param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  
  FUN_1000744d(param_1,*(int *)((int)this + 0x1b0) + 0x3250,param_2,param_3,param_4);
  if (param_4 != '\0') {
    if (param_2 == 5) {
      FUN_1000744d(param_1,*(int *)((int)this + 0x1b0) + 0x3250,3,0,'\0');
      iVar1 = 4;
    }
    else {
      if ((param_2 != 3) && (param_2 != 4)) {
        return;
      }
      iVar1 = 5;
    }
    FUN_1000744d(param_1,*(int *)((int)this + 0x1b0) + 0x3250,iVar1,0,'\0');
  }
  return;
}

