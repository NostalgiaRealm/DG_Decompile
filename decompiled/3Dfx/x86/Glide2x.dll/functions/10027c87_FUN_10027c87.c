/*
 * FUN_10027c87 at 10027c87
 * undefined4 __thiscall FUN_10027c87(void * this, undefined4 * param_1, char param_2)
 * Address ranges: 10027c87-10027de2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10027c87(void *this,undefined4 *param_1,char param_2)

{
  int *piVar1;
  bool bVar2;
  uint3 extraout_var;
  undefined4 uVar3;
  int iVar4;
  uint3 extraout_var_00;
  uint3 uVar5;
  
  bVar2 = FUN_10021826(this,param_1,param_2);
  uVar5 = extraout_var;
  if (bVar2) {
    *(undefined4 *)((int)this + 0xf0) = 0xffffffff;
    *(undefined4 *)((int)this + 0xec) = 0xffffffff;
    *(undefined4 *)((int)this + 0xe8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x110) = 0xffffffff;
    *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x108) = 0xffffffff;
    *(undefined4 *)((int)this + 0xd4) = 0xffffffff;
    *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
    *(uint *)((int)this + 0xc4) = 0xffffffff;
    *(uint *)((int)this + 0xc0) = 0xffffffff;
    if (*(int *)((int)this + 8) != 9) {
      piVar1 = (int *)((int)this + 0xb8);
      uVar3 = FUN_100276ac(this,(int *)*param_1,param_1[1],param_1[2],piVar1,
                           (int *)((int)this + 0xbc),(uint *)((int)this + 0xc0),
                           (uint *)((int)this + 0xc4));
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_100272fb(this,(int *)((int)this + 0xdc),param_1[3],param_1[4],0x35,0x39,
                             param_1[5] * 2);
        if ((char)uVar3 != '\0') {
          iVar4 = FUN_100272fb(this,(int *)((int)this + 0xfc),param_1[3],param_1[4],0x27,0x2a,
                               param_1[5] << 2);
          if ((char)iVar4 != '\0') {
            if ((param_2 == '\0') ||
               (iVar4 = FUN_100279f8(this,*param_1,param_1[1],param_1[2],
                                     (uint)*(byte *)(param_1 + 10),(int *)((int)this + 0xcc),
                                     (uint *)((int)this + 0xd0),(uint *)((int)this + 0xd4)),
               (char)iVar4 != '\0')) {
              if (*piVar1 != 0) {
                iVar4 = *(int *)(*(int *)this * 0x28 + 0x30 + *(int *)((int)this + 0xa4));
                *piVar1 = *piVar1 + iVar4;
              }
              return CONCAT31((int3)((uint)iVar4 >> 8),1);
            }
            FUN_10027622(this,(undefined4 *)((int)this + 0xfc));
          }
          FUN_10027622(this,(undefined4 *)((int)this + 0xdc));
        }
        FUN_10027953((int)this);
      }
    }
    FUN_100218f5(this,*(LPCVOID *)((int)this + 0x54));
    uVar5 = extraout_var_00;
  }
  return (uint)uVar5 << 8;
}

