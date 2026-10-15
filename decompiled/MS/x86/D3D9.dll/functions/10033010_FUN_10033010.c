/*
 * FUN_10033010 at 10033010
 * undefined __thiscall FUN_10033010(void * this, uint param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 10033010-1003327b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10033010(void *this,uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(char *)((int)this + 0x7642) == '\0') || (param_2 != *(int *)((int)this + 0x7620))) ||
      (param_3 != *(int *)((int)this + 0x7624))) ||
     (((param_4 != *(int *)((int)this + 0x7628) || (param_5 != *(int *)((int)this + 0xf82c))) ||
      ((uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) < param_1)))) {
    FUN_10032e50(this,(uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) <
                      param_1,0,0x14);
    if (((*(char *)((int)this + 0x7642) == '\0') || (param_2 != *(int *)((int)this + 0x7620))) ||
       ((param_5 != *(int *)((int)this + 0xf82c) ||
        ((*(int *)((int)this + 0xfc8) != 0x14 ||
         (*(int *)((int)this + 0x100c) != *(int *)((int)this + 0x5c))))))) {
      *(int *)((int)this + 0x7620) = param_2;
      if (*(char *)((int)this + 0x7642) == '\0') {
        *(undefined1 *)((int)this + 0xf66e) = 1;
      }
      if (*(int *)((int)this + 0xf9d8) != *(int *)((int)this + 0xf6d4)) {
        *(int *)((int)this + 0xf9d8) = *(int *)((int)this + 0xf6d4);
        *(undefined1 *)((int)this + 0xf66f) = 1;
      }
      if (*(int *)((int)this + 0xfc8) != 0x14) {
        *(undefined4 *)((int)this + 0xfc8) = 0x14;
        *(undefined1 *)((int)this + 0xf66f) = 1;
      }
      if (*(int *)((int)this + 0x100c) != *(int *)((int)this + 0x5c)) {
        *(int *)((int)this + 0x100c) = *(int *)((int)this + 0x5c);
        *(undefined1 *)((int)this + 0xf66f) = 1;
      }
      if ((param_5 != 0) && (param_5 != *(int *)((int)this + 0xf82c))) {
        *(undefined1 *)((int)this + 0xf669) = 1;
        *(uint *)((int)this + 0xf664) = *(uint *)((int)this + 0xf664) | 1;
      }
      *(int *)((int)this + 0xf82c) = param_5;
      *(undefined4 *)((int)this + 0xf9c8) = *(undefined4 *)(*(int *)((int)this + 0xf6b8) + 0x134);
      *(undefined4 *)((int)this + 0xf9cc) = *(undefined4 *)(*(int *)((int)this + 0xf6b8) + 0x138);
      *(undefined4 *)((int)this + 0xf9d4) = 0;
      *(undefined1 *)((int)this + 0xf668) = 1;
      *(undefined4 *)((int)this + 0xfa2c) = 4;
      *(undefined1 *)((int)this + 0x10230) = 1;
      *(undefined1 *)((int)this + 0x7648) = 0;
      if (*(char *)((int)this + 0x7642) == '\0') {
        *(undefined1 *)((int)this + 0x7642) = 1;
        fVar4 = 2.0 / *(float *)((int)this + 0xeb0);
        fVar2 = (*(float *)((int)this + 0xea8) * -2.0) / *(float *)((int)this + 0xeb0) - 1.0;
        fVar3 = -2.0 / *(float *)((int)this + 0xeb4);
        fVar1 = (*(float *)((int)this + 0xeac) + *(float *)((int)this + 0xeac)) /
                *(float *)((int)this + 0xeb4) + 1.0;
        if ((((fVar4 == *(float *)((int)this + 0x6930)) && (fVar3 == *(float *)((int)this + 0x6934))
             ) && (fVar2 == *(float *)((int)this + 0x6938))) &&
           (fVar1 == *(float *)((int)this + 0x693c))) {
          return;
        }
        *(float *)((int)this + 0x6930) = fVar4;
        *(float *)((int)this + 0x6934) = fVar3;
        *(float *)((int)this + 0x6938) = fVar2;
        *(float *)((int)this + 0x693c) = fVar1;
        *(undefined1 *)((int)this + 0xf671) = 1;
      }
    }
  }
  return;
}

