/*
 * FUN_1000f99b at 1000f99b
 * uint __thiscall FUN_1000f99b(void * this, uint * param_1)
 * Address ranges: 1000f99b-1000faa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000f99b(void *this,uint *param_1)

{
  uint uVar1;
  undefined3 uVar2;
  
  uVar1 = *param_1;
  if (((((((uVar1 != 0) && (uVar1 == *(uint *)((int)this + 0x48))) &&
         (uVar1 = param_1[1], uVar1 == *(uint *)((int)this + 0x4c))) &&
        (((uVar1 = param_1[2], uVar1 == *(uint *)((int)this + 0x50) &&
          (uVar1 = param_1[0xd], uVar1 == *(uint *)((int)this + 0x7c))) &&
         ((uVar1 = param_1[3], uVar1 == *(uint *)((int)this + 0x54) &&
          ((uVar1 = param_1[4], uVar1 == *(uint *)((int)this + 0x58) &&
           (uVar1 = param_1[5], uVar1 == *(uint *)((int)this + 0x5c))))))))) &&
       ((uVar1 = param_1[6], uVar1 == *(uint *)((int)this + 0x60) &&
        (((uVar1 = param_1[0xe], uVar1 == *(uint *)((int)this + 0x80) &&
          (uVar1 = param_1[0x10], uVar1 == *(uint *)((int)this + 0x88))) &&
         (uVar1 = param_1[0x11], uVar1 == *(uint *)((int)this + 0x8c))))))) &&
      (((uVar1 = param_1[0x12], uVar1 == *(uint *)((int)this + 0x90) &&
        (uVar1 = param_1[0x13], uVar1 == *(uint *)((int)this + 0x94))) &&
       (((uVar1 = param_1[0x14], uVar1 == *(uint *)((int)this + 0x98) &&
         ((uVar1 = param_1[0x15], uVar1 == *(uint *)((int)this + 0x9c) &&
          (uVar1 = param_1[0x16], uVar1 == *(uint *)((int)this + 0xa0))))) &&
        (uVar1 = param_1[0x18], uVar1 == *(uint *)((int)this + 0xa8))))))) &&
     (uVar1 = param_1[0x19], uVar1 == *(uint *)((int)this + 0xac))) {
    uVar2 = (undefined3)(uVar1 >> 8);
    uVar1 = CONCAT31(uVar2,(char)param_1[0x1b]);
    if ((((char)param_1[0x1b] == *(char *)((int)this + 0xb4)) &&
        (uVar1 = CONCAT31(uVar2,*(char *)((int)param_1 + 0x6d)),
        *(char *)((int)param_1 + 0x6d) == *(char *)((int)this + 0xb5))) &&
       (uVar1 = CONCAT31(uVar2,*(char *)((int)param_1 + 0x6e)),
       *(char *)((int)param_1 + 0x6e) == *(char *)((int)this + 0xb6))) {
      return CONCAT31(uVar2,1);
    }
  }
  return uVar1 & 0xffffff00;
}

