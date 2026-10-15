/*
 * FUN_10021510 at 10021510
 * undefined __thiscall FUN_10021510(void * this, uint param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 10021510-1002178c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10021510(void *this,uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(char *)((int)this + 0x1905) != '\0') && (param_2 == *(int *)((int)this + 0x18e4))) &&
      (param_3 == *(int *)((int)this + 0x18e8))) &&
     (((param_4 == *(int *)((int)this + 0x18ec) && (param_5 == *(int *)((int)this + 0x1f68))) &&
      (param_1 <= (uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)))))) {
    return;
  }
  FUN_100218e0(this,(uint)((0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50)) <
                    param_1,0,0x14);
  if (((*(char *)((int)this + 0x1905) != '\0') && (param_2 == *(int *)((int)this + 0x18e4))) &&
     ((param_5 == *(int *)((int)this + 0x1f68) &&
      ((*(int *)((int)this + 0x4b0) == 0x14 &&
       (*(int *)((int)this + 0x4f4) == *(int *)((int)this + 0x5c))))))) {
    return;
  }
  *(int *)((int)this + 0x18e4) = param_2;
  if (*(char *)((int)this + 0x1905) == '\0') {
    *(undefined1 *)((int)this + 0x1d3e) = 1;
  }
  if (*(int *)((int)this + 0x2024) != *(int *)((int)this + 0x1d70)) {
    *(int *)((int)this + 0x2024) = *(int *)((int)this + 0x1d70);
    *(undefined1 *)((int)this + 0x1d3f) = 1;
  }
  if (*(int *)((int)this + 0x4b0) != 0x14) {
    *(undefined4 *)((int)this + 0x4b0) = 0x14;
    *(undefined1 *)((int)this + 0x1d3f) = 1;
  }
  if (*(int *)((int)this + 0x4f4) != *(int *)((int)this + 0x5c)) {
    *(int *)((int)this + 0x4f4) = *(int *)((int)this + 0x5c);
    *(undefined1 *)((int)this + 0x1d3f) = 1;
  }
  if ((param_5 != 0) && (param_5 != *(int *)((int)this + 0x1f68))) {
    FUN_1001d230(this,*(uint *)((int)this + 0x1fe8));
    *(undefined1 *)((int)this + 0x1d39) = 1;
  }
  *(int *)((int)this + 0x1f68) = param_5;
  *(undefined4 *)((int)this + 0x1e24) = *(undefined4 *)(*(int *)((int)this + 0x1d60) + 0xb4);
  *(undefined4 *)((int)this + 0x1dfc) = *(undefined4 *)(*(int *)((int)this + 0x1d60) + 0xb8);
  *(undefined4 *)((int)this + 0x1e0c) = 0;
  *(undefined4 *)((int)this + 0x1e2c) = 3;
  *(undefined4 *)((int)this + 0x206c) = 4;
  *(undefined1 *)((int)this + 0x1d38) = 1;
  if (*(char *)((int)this + 0x1905) == '\0') {
    *(undefined1 *)((int)this + 0x1905) = 1;
    fVar4 = 2.0 / *(float *)((int)this + 0x3a4);
    fVar2 = (*(float *)((int)this + 0x39c) * -2.0) / *(float *)((int)this + 0x3a4) - 1.0;
    fVar3 = -2.0 / *(float *)((int)this + 0x3a8);
    fVar1 = (*(float *)((int)this + 0x3a0) + *(float *)((int)this + 0x3a0)) /
            *(float *)((int)this + 0x3a8) + 1.0;
    if ((((fVar4 != *(float *)((int)this + 0x9a0)) || (fVar3 != *(float *)((int)this + 0x9a4))) ||
        (fVar2 != *(float *)((int)this + 0x9a8))) || (fVar1 != *(float *)((int)this + 0x9ac))) {
      *(float *)((int)this + 0x9a0) = fVar4;
      *(float *)((int)this + 0x9a4) = fVar3;
      *(float *)((int)this + 0x9a8) = fVar2;
      *(float *)((int)this + 0x9ac) = fVar1;
      *(undefined1 *)((int)this + 0x1d41) = 1;
    }
  }
  *(undefined2 *)((int)this + 0x21d1) = 0x101;
  *(undefined1 *)((int)this + 0x21d0) = 1;
  return;
}

