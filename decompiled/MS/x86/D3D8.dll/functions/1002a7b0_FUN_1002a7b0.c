/*
 * FUN_1002a7b0 at 1002a7b0
 * undefined __thiscall FUN_1002a7b0(void * this, uint param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 1002a7b0-1002aa1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002a7b0(void *this,uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(char *)((int)this + 0x5955) == '\0') || (param_2 != *(int *)((int)this + 0x5934))) ||
      (param_3 != *(int *)((int)this + 0x5938))) ||
     (((param_4 != *(int *)((int)this + 0x593c) || (param_5 != *(int *)((int)this + 0xdac8))) ||
      ((uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) < param_1)))) {
    FUN_1002a5f0(this,(uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) <
                      param_1,0,0x14);
    if (((*(char *)((int)this + 0x5955) == '\0') || (param_2 != *(int *)((int)this + 0x5934))) ||
       ((param_5 != *(int *)((int)this + 0xdac8) ||
        ((*(int *)((int)this + 0x6a8) != 0x14 ||
         (*(int *)((int)this + 0x6ec) != *(int *)((int)this + 0x5c))))))) {
      *(int *)((int)this + 0x5934) = param_2;
      if (*(char *)((int)this + 0x5955) == '\0') {
        *(undefined1 *)((int)this + 0xd97e) = 1;
      }
      if (*(int *)((int)this + 0xdb8c) != *(int *)((int)this + 0xd9d4)) {
        *(int *)((int)this + 0xdb8c) = *(int *)((int)this + 0xd9d4);
        *(undefined1 *)((int)this + 0xd97f) = 1;
      }
      if (*(int *)((int)this + 0x6a8) != 0x14) {
        *(undefined4 *)((int)this + 0x6a8) = 0x14;
        *(undefined1 *)((int)this + 0xd97f) = 1;
      }
      if (*(int *)((int)this + 0x6ec) != *(int *)((int)this + 0x5c)) {
        *(int *)((int)this + 0x6ec) = *(int *)((int)this + 0x5c);
        *(undefined1 *)((int)this + 0xd97f) = 1;
      }
      if ((param_5 != 0) && (param_5 != *(int *)((int)this + 0xdac8))) {
        *(undefined1 *)((int)this + 0xd979) = 1;
        *(uint *)((int)this + 0xd974) = *(uint *)((int)this + 0xd974) | 1;
      }
      *(int *)((int)this + 0xdac8) = param_5;
      *(undefined4 *)((int)this + 0xdb7c) = *(undefined4 *)(*(int *)((int)this + 0xd9b8) + 0x134);
      *(undefined4 *)((int)this + 0xdb80) = *(undefined4 *)(*(int *)((int)this + 0xd9b8) + 0x138);
      *(undefined4 *)((int)this + 0xdb88) = 0;
      *(undefined1 *)((int)this + 0xd978) = 1;
      *(undefined4 *)((int)this + 0xdbe0) = 4;
      *(undefined1 *)((int)this + 0xdf04) = 1;
      *(undefined1 *)((int)this + 0x595b) = 0;
      if (*(char *)((int)this + 0x5955) == '\0') {
        *(undefined1 *)((int)this + 0x5955) = 1;
        fVar4 = 2.0 / *(float *)((int)this + 0x598);
        fVar2 = (*(float *)((int)this + 0x590) * -2.0) / *(float *)((int)this + 0x598) - 1.0;
        fVar3 = -2.0 / *(float *)((int)this + 0x59c);
        fVar1 = (*(float *)((int)this + 0x594) + *(float *)((int)this + 0x594)) /
                *(float *)((int)this + 0x59c) + 1.0;
        if ((((fVar4 == *(float *)((int)this + 0x4cc0)) && (fVar3 == *(float *)((int)this + 0x4cc4))
             ) && (fVar2 == *(float *)((int)this + 0x4cc8))) &&
           (fVar1 == *(float *)((int)this + 0x4ccc))) {
          return;
        }
        *(float *)((int)this + 0x4cc0) = fVar4;
        *(float *)((int)this + 0x4cc4) = fVar3;
        *(float *)((int)this + 0x4cc8) = fVar2;
        *(float *)((int)this + 0x4ccc) = fVar1;
        *(undefined1 *)((int)this + 0xd981) = 1;
      }
    }
  }
  return;
}

