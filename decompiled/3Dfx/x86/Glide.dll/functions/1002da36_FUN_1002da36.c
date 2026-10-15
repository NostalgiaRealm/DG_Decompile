/*
 * FUN_1002da36 at 1002da36
 * undefined4 __thiscall FUN_1002da36(void * this, undefined4 * param_1, char param_2)
 * Address ranges: 1002da36-1002db32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002da36(void *this,undefined4 *param_1,char param_2)

{
  int *piVar1;
  bool bVar2;
  uint3 extraout_var;
  undefined4 uVar3;
  int iVar4;
  uint3 extraout_var_00;
  uint3 uVar5;
  
  bVar2 = FUN_10021bb2(this,param_1,param_2);
  uVar5 = extraout_var;
  if (bVar2) {
    if (*(int *)((int)this + 8) != 9) {
      piVar1 = (int *)((int)this + 0xac);
      uVar3 = FUN_1002d6d1(this,*param_1,param_1[1],param_1[2],piVar1,
                           (undefined4 *)((int)this + 0xb0),(undefined4 *)((int)this + 0xb4),
                           (undefined4 *)((int)this + 0xb8),(undefined4 *)((int)this + 0xbc),
                           (int)this + 0xc0);
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_1002d161(this,param_1[3],param_1[4],param_1[5]);
        if ((char)uVar3 != '\0') {
          iVar4 = FUN_1002d419(this,param_1[3],param_1[4],param_1[5]);
          if ((char)iVar4 != '\0') {
            if ((param_2 == '\0') ||
               (iVar4 = FUN_1002d92c(this,*param_1,param_1[1],param_1[2],*(byte *)(param_1 + 10),
                                     (undefined4 *)((int)this + 0xf4),(int)this + 0xf8),
               (char)iVar4 != '\0')) {
              if (*piVar1 != 0) {
                iVar4 = *(int *)(*(int *)this * 0x28 + 0x30 + *(int *)((int)this + 0xa4));
                *piVar1 = *piVar1 + iVar4;
              }
              return CONCAT31((int3)((uint)iVar4 >> 8),1);
            }
            FUN_1002d64e(this);
          }
          FUN_1002d396(this);
        }
        FUN_1002d8a9(this);
      }
    }
    FUN_10021c81(this,*(LPCVOID *)((int)this + 0x54));
    uVar5 = extraout_var_00;
  }
  return (uint)uVar5 << 8;
}

