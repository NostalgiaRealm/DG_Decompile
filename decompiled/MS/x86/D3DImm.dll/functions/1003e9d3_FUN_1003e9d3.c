/*
 * FUN_1003e9d3 at 1003e9d3
 * undefined __thiscall FUN_1003e9d3(void * this, int param_1, int param_2)
 * Address ranges: 1003e9d3-1003eaa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003e9d3(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + param_1 * 4 + 0x14b0) != param_2) {
    switch(param_1) {
    case 1:
      *(int *)((int)this + 0x1530) = param_2;
      *(undefined1 *)((int)this + 0x1755) = 1;
      break;
    case 2:
      (**(code **)(**(int **)((int)this + 0x14) + 0x50))(0x8b,param_2);
      *(int *)((int)this + 0x4bc) = param_2;
      break;
    case 3:
      if (*(int *)(*(int *)((int)this + 0xa58) + 0x30) != 1) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x50))(0xb,(uint)(param_2 == 1));
        *(uint *)((int)this + 700) = (uint)(param_2 == 1);
      }
      break;
    case 4:
      (**(code **)(**(int **)((int)this + 0x14) + 0x50))(0x8c,param_2);
      *(int *)((int)this + 0x4c0) = param_2;
      break;
    case 5:
      *(undefined1 *)((int)this + 0xa86) = 1;
      break;
    case 6:
      *(undefined1 *)((int)this + 0xa87) = 1;
      break;
    case 7:
      *(undefined1 *)((int)this + 0xa88) = 1;
      break;
    case 8:
      (**(code **)(**(int **)((int)this + 0x14) + 0x50))(0x8d,param_2);
      *(int *)((int)this + 0x4c4) = param_2;
    }
    *(int *)((int)this + param_1 * 4 + 0x14b0) = param_2;
  }
  return;
}

