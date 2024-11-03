<script setup>
  import { ref } from 'vue'

  const n = ref(0)

  const increment = () =>{
    n.value = Math.floor(Math.random() * 10)+1
  }
  console.log(n.value)
</script>


<template>
  <div>{{ n }}</div>
  <button @click="increment">Click Radom</button>
</template>