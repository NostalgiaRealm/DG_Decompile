/*
 * FUN_10036700 at 10036700
 * undefined __thiscall FUN_10036700(void * this, uint param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 10036700-10036983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10036700(void *this,uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(char *)((int)this + 0x5955) != '\0') && (param_2 == *(int *)((int)this + 0x5934))) &&
      (param_3 == *(int *)((int)this + 0x5938))) &&
     (((param_4 == *(int *)((int)this + 0x593c) && (param_5 == *(int *)((int)this + 0xdbe0))) &&
      (param_1 <= (uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)))))) {
    return;
  }
  FUN_10036ae0(this,(uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) <
                    param_1,0,0x14);
  if (((*(char *)((int)this + 0x5955) != '\0') && (param_2 == *(int *)((int)this + 0x5934))) &&
     ((param_5 == *(int *)((int)this + 0xdbe0) &&
      ((*(int *)((int)this + 0x6a8) == 0x14 &&
       (*(int *)((int)this + 0x6ec) == *(int *)((int)this + 0x5c))))))) {
    return;
  }
  *(int *)((int)this + 0x5934) = param_2;
  if (*(char *)((int)this + 0x5955) == '\0') {
    *(undefined1 *)((int)this + 0xd97e) = 1;
  }
  if (*(int *)((int)this + 0xdc98) != *(int *)((int)this + 0xd9d4)) {
    *(int *)((int)this + 0xdc98) = *(int *)((int)this + 0xd9d4);
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
  if ((param_5 != 0) && (param_5 != *(int *)((int)this + 0xdbe0))) {
    FUN_10032380(this,*(uint *)((int)this + 0xdc80));
    *(undefined1 *)((int)this + 0xd979) = 1;
  }
  *(int *)((int)this + 0xdbe0) = param_5;
  *(undefined4 *)((int)this + 0xda9c) = *(undefined4 *)(*(int *)((int)this + 0xd9c4) + 0xac);
  *(undefined4 *)((int)this + 0xda74) = *(undefined4 *)(*(int *)((int)this + 0xd9c4) + 0xb0);
  *(undefined4 *)((int)this + 0xda84) = 0;
  *(undefined4 *)((int)this + 0xdaa4) = 3;
  *(undefined4 *)((int)this + 0xdce0) = 4;
  *(undefined1 *)((int)this + 0x595b) = 0;
  *(undefined1 *)((int)this + 0xd978) = 1;
  if (*(char *)((int)this + 0x5955) == '\0') {
    *(undefined1 *)((int)this + 0x5955) = 1;
    fVar4 = 2.0 / *(float *)((int)this + 0x598);
    fVar2 = (*(float *)((int)this + 0x590) * -2.0) / *(float *)((int)this + 0x598) - 1.0;
    fVar3 = -2.0 / *(float *)((int)this + 0x59c);
    fVar1 = (*(float *)((int)this + 0x594) + *(float *)((int)this + 0x594)) /
            *(float *)((int)this + 0x59c) + 1.0;
    if ((((fVar4 != *(float *)((int)this + 0x4cc0)) || (fVar3 != *(float *)((int)this + 0x4cc4))) ||
        (fVar2 != *(float *)((int)this + 0x4cc8))) || (fVar1 != *(float *)((int)this + 0x4ccc))) {
      *(float *)((int)this + 0x4cc0) = fVar4;
      *(float *)((int)this + 0x4cc4) = fVar3;
      *(float *)((int)this + 0x4cc8) = fVar2;
      *(float *)((int)this + 0x4ccc) = fVar1;
      *(undefined1 *)((int)this + 0xd981) = 1;
    }
  }
  *(undefined2 *)((int)this + 0xde59) = 0x101;
  *(undefined1 *)((int)this + 0xde58) = 1;
  return;
}

