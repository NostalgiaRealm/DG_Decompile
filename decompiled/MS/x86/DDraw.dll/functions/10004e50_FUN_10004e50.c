/*
 * FUN_10004e50 at 10004e50
 * undefined1 __thiscall FUN_10004e50(void * this, uint param_1)
 * Address ranges: 10004e50-10004fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 __thiscall FUN_10004e50(void *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  bool bVar7;
  ushort in_FPUControlWord;
  uint local_c;
  uint *local_8;
  
  uVar4 = *(uint *)((int)this + 0x20);
  uVar5 = 0;
  if (((uVar4 != 0) && (uVar5 = 0, uVar4 <= param_1)) &&
     (param_1 < (uint)*(ushort *)((int)this + 0xc) * *(int *)((int)this + 0x14) + uVar4)) {
    local_8 = &local_c;
    local_c = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_c = (uint)in_FPUControlWord;
    }
    if (*(int *)((int)this + 0x24) == 0) {
      FUN_100052d4((int)this);
      (**(code **)(*(int *)this + 4))();
      if (((*(byte *)((int)this + 0x34) & 1) == 0) &&
         (cVar3 = (*(code *)**(undefined4 **)this)(), cVar3 != '\0')) {
        (**(code **)(*(int *)this + 8))(0xffffffff);
      }
    }
    else {
      (**(code **)(*(int *)this + 4))();
      uVar4 = (int)(((int)(param_1 - uVar4) >> 0x1f & 0xfffU) + (param_1 - uVar4)) >> 0xc;
      local_8 = (uint *)(uVar4 & 7);
      uVar6 = uVar4 >> 3;
      bVar1 = (&DAT_10063758)[(int)local_8];
      if ((*(byte *)(uVar6 + *(int *)((int)this + 0x24)) & bVar1) == 0) {
        bVar2 = *(byte *)(uVar6 + *(int *)((int)this + 0x28));
        bVar7 = (bVar1 & bVar2) != 0;
        if ((bVar1 & bVar2) != 0) {
          cVar3 = (*(code *)**(undefined4 **)this)();
          bVar7 = bVar7 && cVar3 == '\0';
        }
        if ((bVar7) || (cVar3 = (**(code **)(*(int *)this + 8))(uVar4), cVar3 != '\0')) {
          *(byte *)(uVar6 + *(int *)((int)this + 0x24)) =
               *(byte *)(uVar6 + *(int *)((int)this + 0x24)) | (&DAT_10063758)[(int)local_8];
          *(byte *)(uVar6 + *(int *)((int)this + 0x28)) =
               *(byte *)(uVar6 + *(int *)((int)this + 0x28)) | (&DAT_10063758)[(int)local_8];
        }
      }
    }
    uVar4 = *(uint *)((int)this + 0x34);
    uVar5 = 1;
    *(uint *)((int)this + 0x34) = uVar4 | 1;
    *(uint *)((int)this + 0x34) = uVar4 | 5;
  }
  return uVar5;
}

