/*
 * FUN_10041e40 at 10041e40
 * undefined __thiscall FUN_10041e40(void * this, uint param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 10041e40-100420c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10041e40(void *this,uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(char *)((int)this + 0x7642) != '\0') && (param_2 == *(int *)((int)this + 0x7620))) &&
      (param_3 == *(int *)((int)this + 0x7624))) &&
     (((param_4 == *(int *)((int)this + 0x7628) && (param_5 == *(int *)((int)this + 0xfa7c))) &&
      (param_1 <= (uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)))))) {
    return;
  }
  FUN_10042220(this,(uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) <
                    param_1,0,0x14);
  if (((*(char *)((int)this + 0x7642) != '\0') && (param_2 == *(int *)((int)this + 0x7620))) &&
     ((param_5 == *(int *)((int)this + 0xfa7c) &&
      ((*(int *)((int)this + 0xfc8) == 0x14 &&
       (*(int *)((int)this + 0x100c) == *(int *)((int)this + 0x5c))))))) {
    return;
  }
  *(int *)((int)this + 0x7620) = param_2;
  if (*(char *)((int)this + 0x7642) == '\0') {
    *(undefined1 *)((int)this + 0xf66e) = 1;
  }
  if (*(int *)((int)this + 0xfbd0) != *(int *)((int)this + 0xf6d4)) {
    *(int *)((int)this + 0xfbd0) = *(int *)((int)this + 0xf6d4);
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
  if ((param_5 != 0) && (param_5 != *(int *)((int)this + 0xfa7c))) {
    FUN_1003ccc0(this,*(uint *)((int)this + 0xfb7c));
    *(undefined1 *)((int)this + 0xf669) = 1;
  }
  *(int *)((int)this + 0xfa7c) = param_5;
  *(undefined4 *)((int)this + 0xf834) = *(undefined4 *)(*(int *)((int)this + 0xf6c4) + 0xac);
  *(undefined4 *)((int)this + 0xf80c) = *(undefined4 *)(*(int *)((int)this + 0xf6c4) + 0xb0);
  *(undefined4 *)((int)this + 0xf81c) = 0;
  *(undefined4 *)((int)this + 0xf83c) = 3;
  *(undefined4 *)((int)this + 0xfc18) = 4;
  *(undefined1 *)((int)this + 0x7648) = 0;
  *(undefined1 *)((int)this + 0xf668) = 1;
  if (*(char *)((int)this + 0x7642) == '\0') {
    *(undefined1 *)((int)this + 0x7642) = 1;
    fVar4 = 2.0 / *(float *)((int)this + 0xeb0);
    fVar2 = (*(float *)((int)this + 0xea8) * -2.0) / *(float *)((int)this + 0xeb0) - 1.0;
    fVar3 = -2.0 / *(float *)((int)this + 0xeb4);
    fVar1 = (*(float *)((int)this + 0xeac) + *(float *)((int)this + 0xeac)) /
            *(float *)((int)this + 0xeb4) + 1.0;
    if ((((fVar4 != *(float *)((int)this + 0x6930)) || (fVar3 != *(float *)((int)this + 0x6934))) ||
        (fVar2 != *(float *)((int)this + 0x6938))) || (fVar1 != *(float *)((int)this + 0x693c))) {
      *(float *)((int)this + 0x6930) = fVar4;
      *(float *)((int)this + 0x6934) = fVar3;
      *(float *)((int)this + 0x6938) = fVar2;
      *(float *)((int)this + 0x693c) = fVar1;
      *(undefined1 *)((int)this + 0xf671) = 1;
    }
  }
  *(undefined2 *)((int)this + 0xfd99) = 0x101;
  *(undefined1 *)((int)this + 0xfd98) = 1;
  return;
}

